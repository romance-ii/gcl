/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
        unixsave.c
*/


#ifdef HAVE_FCNTL
#include <fcntl.h>
#else
#include <sys/file.h>
#endif

#ifdef HAVE_AOUT
#undef BSD
#undef ATT
#define BSD
#endif



#ifdef BSD
#include <a.out.h>
#endif


#ifdef ATT
#include <syms.h>
#include <filehdr.h>
#include <aouthdr.h>
#include <scnhdr.h>
#endif

#ifdef E15
#include <a.out.h>
extern  etext;
#endif


filecpy(to, from, n)
FILE *to, *from;
register int n;
{
        char buffer[BUFSIZ];

        for (;;)
                if (n > BUFSIZ) {
                        fread(buffer, BUFSIZ, 1, from);
                        fwrite(buffer, BUFSIZ, 1, to);
                        n -= BUFSIZ;
                } else if (n > 0) {
                        fread(buffer, 1, n, from);
                        fwrite(buffer, 1, n, to);
                        break;
                } else
                        break;
}


memory_save(original_file, save_file)
char *original_file, *save_file;
{       /* MEM_SAVE_LOCALS; */

        struct filehdr Ehdr;
        struct aouthdr header;
        struct scnhdr shdr[10];
        HDRR symhdr;

          struct scnhdr *text_section;
          struct scnhdr *rdata_section;
          struct scnhdr *data_section;
          struct scnhdr *lit8_section;
          struct scnhdr *lit4_section;
          struct scnhdr *sdata_section;
          struct scnhdr *sbss_section;
          struct scnhdr *bss_section;

        char *data_begin, *data_end;
        int original_data;
        FILE *original, *save;
        register int n;
        register char *p;
        extern char *sbrk();


        fclose(stdin);
        original = fopen(original_file, "r");
        if (stdin != original || original->_file != 0) {
                fprintf(stderr, "Can't open the original file.\n");
                exit(1);
        }
        setbuf(original, stdin_buf);
        fclose(stdout);
        unlink(save_file);
        n = open(save_file, O_CREAT|O_WRONLY, 0777);
        if (n != 1 || (save = fdopen(n, "w")) != stdout) {
                fprintf(stderr, "Can't open the save file.\n");
                exit(1);
        }
        setbuf(save, stdout_buf);

        fread(&Ehdr,sizeof(Ehdr),1,original);
        fread(&header,Ehdr.f_opthdr, 1,original);
        {int i=0;
         int pagesize = getpagesize();
/*       core_end = (char *)((int) (core_end + pagesize - 1) & ~(pagesize - 1));
*/

#define READ_SCNHDR(name,str)  \
         name = &shdr[i]; \
           fread(name,sizeof(struct scnhdr),1,original); \
             if(strcmp(str,(name)->s_name)) printf("got %s not %s sections", \
						   (name)->s_name,str); i++;
         READ_SCNHDR(text_section,".text") ;
         READ_SCNHDR(rdata_section,".rdata");
         READ_SCNHDR(data_section,".data");
         READ_SCNHDR(lit8_section, ".lit8");
         READ_SCNHDR(lit4_section, ".lit4");
         READ_SCNHDR(sdata_section, ".sdata");
         READ_SCNHDR(sbss_section,".sbss");
         READ_SCNHDR(bss_section,".bss");
         if(i!= Ehdr.f_nscns) printf("wrong number of sections");
       }
/*
        READ_HEADER;
        FILECPY_HEADER;
        */
#define ALTER_SCN(name,size,addr,scnptr) (name)->s_size = size; \
         (name)->s_paddr = addr; \
         (name)->s_vaddr = addr; \
         (name)->s_scnptr = scnptr;

         original_data = header.a_data;

         data_begin =  (char *)rdata_section->s_vaddr;
         header.a_data =        (int) core_end - rdata_section->s_vaddr;
         header.a_bss = 0;


         ALTER_SCN(data_section, header.a_data - rdata_section->s_size
                   ,data_section->s_vaddr, data_section->s_scnptr);
         ALTER_SCN(lit4_section,0,data_section->s_vaddr,data_section->s_scnptr);
         ALTER_SCN(lit8_section,0,data_section->s_vaddr,data_section->s_scnptr);
         ALTER_SCN(sbss_section,0,data_section->s_vaddr,data_section->s_scnptr);
         ALTER_SCN(sdata_section,0,data_section->s_vaddr,data_section->s_scnptr)
;
         ALTER_SCN(bss_section,0, /* sbrk(0) - core_end,*/
                   data_section->s_vaddr,data_section->s_scnptr);

         header.bsize = bss_section->s_size;
         Ehdr.f_symptr += (header.dsize - original_data);

         fwrite(&Ehdr,1,sizeof(Ehdr),save);
         fwrite(&header,1,Ehdr.f_opthdr,save);
         fwrite(&shdr[0],sizeof(struct scnhdr),Ehdr.f_nscns,save);
         filecpy(save,original,rdata_section->s_scnptr - ftell(save));
/*       p = data_begin; n= header.a_data;
         while(--n>=0)
           {putc(*p,save);          p++;} */

         for (n = header.a_data, p = data_begin;  ;  n -= BUFSIZ, p += BUFSIZ)
           {    {int jj;
                 jj = ftell(save);}



                if (n > BUFSIZ)
                        fwrite(p, BUFSIZ, 1, save);
                else if (n > 0) {
                        fwrite(p, 1, n, save);
                        break;
                } else
                        break;}

        fseek(original, original_data, 1);


        COPY_TO_SAVE;
        {int diff = (header.dsize - original_data);
         fseek(original,Ehdr.f_symptr - diff,0);
         fread(&symhdr,sizeof(symhdr),1,original);
         if(symhdr.cbLineOffset)symhdr.cbLineOffset+= diff;
         if(symhdr.cbDnOffset)symhdr.cbDnOffset+= diff;
         if(symhdr.cbPdOffset)symhdr.cbPdOffset+= diff;
         if(symhdr.cbSymOffset)symhdr.cbSymOffset+= diff;
         if(symhdr.cbOptOffset)symhdr.cbOptOffset+= diff;
         if(symhdr.cbAuxOffset)symhdr.cbAuxOffset+= diff;
         if(symhdr.cbSsOffset)symhdr.cbSsOffset+= diff;
         if(symhdr.cbSsExtOffset)symhdr.cbSsExtOffset+= diff;
         if(symhdr.cbFdOffset)symhdr.cbFdOffset+= diff;
         if(symhdr.cbRfdOffset)symhdr.cbRfdOffset+= diff;
         if(symhdr.cbExtOffset)symhdr.cbExtOffset+= diff;
         fseek(save,Ehdr.f_symptr ,0);
         fwrite(&symhdr,sizeof(symhdr),1,save);
       }

        fclose(original);
        fclose(save);
}

Lsave()
{
        char filename[256];

        check_arg(1);
        check_type_or_pathname_string_symbol_stream(&vs_base[0]);
        coerce_to_filename(vs_base[0], filename);

        _cleanup();
/*
        {
                FILE *p;
                int nfile;


                nfile = NUMBER_OPEN_FILES;

                for (p = &_iob[3];  p < &_iob[nfile];  p++)
                        fclose(p);
        }
*/
        memory_save(kcl_self, filename);
/*
        _exit(0);
*/
        exit(0);

        /*  no return  */
}

