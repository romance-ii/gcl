/*
    File rsym_macosx.c
    
    Build an executable rsym for Mac OS X (31 July 2003).
    
    Grab only the external symbols from a Mach-O object file, and put them
    in a simple format. This information will be used for relocation.
    
    To compile in standalone mode:
        gcc -DDEBUG -DSTANDALONE -I../h -o rsym_macosx rsym_macosx.c
    
    Aurelien Chanudet (aurelienDOTchanudetATm4xDOTorg)
*/

#include <mach-o/loader.h>
#include <mach-o/nlist.h>

#include <mach/mach.h>

#ifdef STANDALONE
#include <stdio.h>
#define SPECIAL_RSYM
#endif

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define IN_RSYM 1

/* #include "config.h" */
#include "ext_sym.h"

void rsym_error (char *format, ...)
{
    va_list ap;
    
    va_start (ap, format);
    fprintf (stderr, "rsym: ");
    vfprintf (stderr, format, ap);
 /* fprintf (stderr, " (%s)", strerror(errno)); */
    fprintf (stderr, "\n");
    va_end (ap);
    exit (1);
}

int rsym_select_symbol(struct nlist *symbol)
{
    if (symbol->n_type & N_STAB) {
        return (FALSE);
    }
    if (symbol->n_sect == NO_SECT) {
        return (FALSE);
    }
    return (symbol->n_type & N_EXT);
}

void rsym_doit2 (struct nlist *symbols, unsigned long nsyms, char *outfile)
{
    unsigned long i;
    struct lsymbol_table tab;
    FILE *symout;
    
    if (!(symout = fopen (outfile, "wb"))) {
        rsym_error ("cannot open file for writing: %s", outfile);
    }

    tab.n_symbols=0;
    tab.tot_leng=0;
    
    fseek (symout, sizeof(tab), 0);
    
    for (i=0 ; i < nsyms ; i++)
    {
        int addr = (int) symbols[i].n_value;
        char *name = symbols[i].n_un.n_name;
        
        if (name)
        {
            tab.n_symbols++;
            fwrite (&addr, sizeof (int), 1, symout);
            while (tab.tot_leng++, *name)
                putc (*name++, symout);
            putc (0, symout);
        }
        else {
            fprintf (stderr, "warning: malformed symbol\n");
        }
    }
    
  #ifdef DEBUG
    fprintf (stderr, "%d/%d symbol(s) reviewed\n", tab.n_symbols, nsyms);
  #endif
    
    fseek (symout, 0, 0);
    fwrite (&tab, sizeof(tab), 1, symout);
    
    fclose (symout);
}

void rsym_doit1 (char *infile, char *outfile)
{
    struct stat stat_buf;
    struct mach_header *mh;
    struct load_command *lc;
    struct symtab_command *st;
    struct dysymtab_command *dyst;
    unsigned long nsyms, i, size;
    unsigned long strsize;
    struct nlist *symtab, *selected_symbols;
    kern_return_t r;
    char *strtab;
    vm_size_t s;
    char *addr;
    int fd;
    
    if ((fd = open (infile, O_RDONLY, 0)) < 0) {
        rsym_error ("cannot open input file: %s", infile);
    }
    
    if (fstat (fd, &stat_buf) == -1) {
        rsym_error ("cannot fstat file: %s", infile);
    }
    
    size = stat_buf.st_size;
    
    if ((r = map_fd (fd, (vm_offset_t) 0, (vm_offset_t *) &addr,
            (boolean_t) TRUE, (vm_size_t) size)) != KERN_SUCCESS) {
        rsym_error ("cannot map file in memory: %s", infile);
    }
    
    mh = (struct mach_header *) addr;
    lc = (struct load_command *) ((char *) addr + sizeof(struct mach_header));
    
    for (i=0 ; i < mh->ncmds ; i++) {
        if (lc->cmd == LC_SYMTAB) {
            st = (struct symtab_command *) lc;
        }
        else if (lc->cmd == LC_DYSYMTAB) {
            dyst = (struct dysymtab_command *) lc;
        }
        lc = (struct load_command *) ((char *) lc + lc->cmdsize);
    }
    
    symtab = (struct nlist *) ((char *) addr + st->symoff);
    
    s = sizeof(struct nlist) * st->nsyms;
    if (vm_allocate (mach_task_self (), (vm_address_t *) &selected_symbols, s, 1) != KERN_SUCCESS) {
        rsym_error ("could not vm_allocate");
    }
    
    nsyms = 0;
    
    for (i = 0 ; i < st->nsyms ; i++) {
        if (rsym_select_symbol (symtab + i))
            selected_symbols[nsyms++] = symtab[i];
    }
    
    strtab = addr + st->stroff;
    strsize = st->strsize;
    
    for (i = 0 ; i < nsyms ; i++) {
        if (selected_symbols[i].n_un.n_strx == 0)
            selected_symbols[i].n_un.n_name = "";
        else if (selected_symbols[i].n_un.n_strx < 0 ||
                selected_symbols[i].n_un.n_strx > strsize)
            selected_symbols[i].n_un.n_name = "bad string index";
        else
            selected_symbols[i].n_un.n_name = selected_symbols[i].n_un.n_strx + strtab;
        
      #if DEBUG
        fprintf (stderr, "debug: %8x %s\n", (unsigned int) selected_symbols[i].n_value,
            selected_symbols[i].n_un.n_name);
      #endif
    }
    
    rsym_doit2 (selected_symbols, nsyms, outfile);
    
    if (vm_deallocate (mach_task_self (), (vm_address_t) selected_symbols, s) != KERN_SUCCESS) {
        fprintf (stderr, "warning: failed to free memory\n");
    }
    
    if (vm_deallocate (mach_task_self (), (vm_address_t) addr, (vm_size_t) size) != KERN_SUCCESS) {
        fprintf (stderr, "warning: failed to deallocate mapped file\n");
    }
        
    close (fd);
}

int main (int argc, char **argv, char **envp)
{
    if (argc != 3) {
        fprintf (stderr, "usage: rsym <infile> <outfile>\n");
        exit (1);
    }
    
    rsym_doit1 (argv[1], argv[2]);
    
    return 0;
}
