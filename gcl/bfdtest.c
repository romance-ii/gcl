#define IN_GCC
#include <bfd.h>
#include <bfdlink.h>
#include <string.h>
#include <stdio.h>

static bfd *exe_bfd = NULL;
struct bfd_link_info link_info;

int build_symbol_table_bfd ( char *oname ) {

    int u,v;
    asymbol **q;

    if ( ! ( exe_bfd = bfd_openr ( oname, 0 ) ) ) {
        fprintf ( stderr, "Cannot open self.\n" );
        exit ( 0 );
    }
    
    if ( ! bfd_check_format ( exe_bfd, bfd_object ) ) {
        fprintf ( stderr, "I'm not an object.\n" );
        exit ( 0 );
    }
    
    if (!(link_info.hash = bfd_link_hash_table_create (exe_bfd))) {
        fprintf ( stderr, "Cannot make hash table.\n" );
        exit ( 0 );
    }
    
    if (!bfd_link_add_symbols(exe_bfd,&link_info)) {
        fprintf ( stderr, "Cannot add self symbols\n.\n" );
        exit ( 0 );
    }
    
    if ((u=bfd_get_symtab_upper_bound(exe_bfd))<0) {
        fprintf ( stderr, "Cannot get self's symtab upper bound.\n" );
        exit ( 0 );
    }
    
    fprintf ( stderr, "Allocating symbol table (%d bytes)\n", u );
    q = (asymbol **) malloc ( u );

    if ( ( v = bfd_canonicalize_symtab ( exe_bfd, q ) ) < 0 ) {
        fprintf ( stderr, "Cannot canonicalize self's symtab.\n" );
        exit ( 0 );
    }

#ifdef _WIN32        
    for ( u=0; u < v; u++ ) {
        char *c;
        if ( ( c = (char *) strstr ( q[u]->name, "_" ) ) ) {
            struct bfd_link_hash_entry *h;
            if ( ! ( h = bfd_link_hash_lookup ( link_info.hash, q[u]->name, true, true, true ) ) )
                fprintf ( stderr, "Cannot make new hash entry.\n" );
            h->type=bfd_link_hash_defined;
            if ( !q[u]->section )
                fprintf ( stderr, "Symbol is missing section.\n" );
            h->u.def.value   = q[u]->value + q[u]->section->vma;
            h->u.def.section = q[u]->section;
            fprintf ( stderr, "Processed %s\n", q[u]->name );
        }
    }
#else    
    for (u=0;u<v;u++) {
        char *c;
        if ((c=(char *)strstr(q[u]->name,"@@GLIBC\n" ))) {
            struct bfd_link_hash_entry *h;
            *c=0;
            if (!(h=bfd_link_hash_lookup(link_info.hash,q[u]->name,true,true,true)))
                fprintf ( stderr, "Cannot make new hash entry.\n" );
            h->type=bfd_link_hash_defined;
            if (!q[u]->section)
                fprintf ( stderr, "Symbol is missing section.\n" );
            h->u.def.value=q[u]->value+q[u]->section->vma;
            h->u.def.section=q[u]->section;
            *c='@';
        }
    }
#endif        
    bfd_close ( exe_bfd );
    free(q);
    return 0;
    
}


/* align for power of two n */
static void *
    round_up(void *address, unsigned long n)
{
    fprintf ( stderr, "round_up: address = %d, n = %d, returning %d\n",
              address, n, (void *)(((unsigned long)address + n -1) & ~(n-1)) );
    fflush ( stderr );
    return  (void *)(((unsigned long)address + n -1) & ~(n-1)) ;
}
#define ROUND_UP(a,b) round_up(a,b) 


static boolean
    madd_archive_element (struct bfd_link_info * link_info,
                           bfd *abfd,
                           const char *name) {
        fprintf ( stderr, "madd_archive_element\n");
        return false;

    }

static boolean
    mmultiple_definition (struct bfd_link_info * link_info,
                           const char *name,
                           bfd *obfd,
                           asection *osec,
                           bfd_vma oval,
                           bfd *nbfd,
                           asection *nsec,
                           bfd_vma nval) {

        fprintf ( stderr, "mmultiple_definition\n");
        return false;

    }

static boolean
    mmultiple_common (struct bfd_link_info * link_info,
                       const char *name,
                       bfd *obfd,
                       enum bfd_link_hash_type otype,
                       bfd_vma osize,
                       bfd *nbfd,
                       enum bfd_link_hash_type ntype,
                       bfd_vma nsize) {

        fprintf ( stderr, " mmultiple_common\n");
        return false;

    }

static boolean
    madd_to_set (struct bfd_link_info * link_info,
                  struct bfd_link_hash_entry *entry,
                  bfd_reloc_code_real_type reloc,
                  bfd *abfd, asection *sec, bfd_vma value) {

        fprintf ( stderr, "madd_to_set\n");
        return false;

    }

static  boolean 
    mconstructor (struct bfd_link_info * link_info,boolean constructor,
                   const char *name, bfd *abfd, asection *sec,
                   bfd_vma value) {

        fprintf ( stderr, "mconstructor\n");
        return false;

    }

static boolean
    mwarning (struct bfd_link_info * link_info,
               const char *warning, const char *symbol,
               bfd *abfd, asection *section,
               bfd_vma address) {

        fprintf ( stderr, "mwarning\n");
        return false;

    }

static boolean
    mundefined_symbol (struct bfd_link_info * link_info,
                        const char *name, bfd *abfd,
                        asection *section,
                        bfd_vma address,
                        boolean fatal) {

        printf("mundefined_symbol %s is undefined\n",name);
        return false;
    }

static boolean
    mreloc_overflow (struct bfd_link_info * link_info,
                      const char *name,
                      const char *reloc_name, bfd_vma addend,
                      bfd *abfd, asection *section,
                      bfd_vma address) {

        printf("mreloc_overflow reloc for %s is overflowing\n",name);
        return false;

    }

static boolean
    mreloc_dangerous (struct bfd_link_info * link_info,
                       const char *message,
                       bfd *abfd, asection *section,
                       bfd_vma address) {

        printf("mreloc_dangerous reloc is dangerous %s\n",message);
        return false;

    }

static boolean
    munattached_reloc (struct bfd_link_info * link_info,
                        const char *name,
                        bfd *abfd, asection *section,
                        bfd_vma address) {

        fprintf ( stderr, " munattached_reloc\n");
        return false;

    }

static boolean
    mnotice (struct bfd_link_info * link_info, const char *name,
              bfd *abfd, asection *section, bfd_vma address) {

        fprintf ( stderr, "mnotice\n");
        return false;

    }


int main ( int argc, char ** argv )
{
    int init_address=-1;
    int max_align = 0;
    unsigned long curr_size = 0;
    bfd *obj_bfd = NULL;
    bfd_error_type myerr;
    unsigned u = 0, v = 0;
    asymbol **q = NULL;
    asection *s = NULL;
    static struct bfd_link_callbacks link_callbacks;
    static struct bfd_link_order link_order;

    void *current = NULL;
    void *cfd_self      = NULL;
    void *cfd_start     = NULL;
    int   cfd_size      = 0;
    void *the_start     = NULL;
    void *start_address = NULL;
    void *m             = NULL;
    
    fprintf ( stderr, "In BFD fast load test.\n" );
    if ( argc < 3 ) {
        fprintf ( stderr, "Need an executable and an object file as arguments.\n" );
    } else {

        memset ( &link_info, 0, sizeof (link_info) );
        memset ( &link_order, 0, sizeof (link_order) );
        memset ( &link_callbacks, 0, sizeof (link_callbacks) );
        

        bfd_init();

        fprintf ( stderr, "BUILDING EXECUTABLE SYMBOL TABLE (ARGV[1]) \n\n" );
        build_symbol_table_bfd ( argv[1] );        

        link_callbacks.add_archive_element=madd_archive_element;
        link_callbacks.multiple_definition=mmultiple_definition;
        link_callbacks.multiple_common=mmultiple_common;
        link_callbacks.add_to_set=madd_to_set;
        link_callbacks.constructor=mconstructor;
        link_callbacks.warning=mwarning;
        link_callbacks.undefined_symbol=mundefined_symbol;
        link_callbacks.reloc_overflow=mreloc_overflow;
        link_callbacks.reloc_dangerous=mreloc_dangerous;
        link_callbacks.unattached_reloc=munattached_reloc;
        link_callbacks.notice = mnotice;
        link_info.callbacks = &link_callbacks;
        link_order.type = bfd_indirect_link_order;

        if ( ! ( obj_bfd = bfd_openr ( argv[2], 0 ) ) ) {
            fprintf ( stderr, "Cannot open bfd.\n" );
        }
        
        if ( ( myerr = bfd_get_error () ) && myerr != 3 ) {
            fprintf ( stderr, "Unknown bfd error code on openr %s %d\n.", argv[2], myerr );
        }
        fflush ( stderr );
        if ( ! bfd_check_format ( obj_bfd, bfd_object ) ) {
            fprintf ( stderr, "Unknown bfd format %s.\n", argv[2] );
        }

        if ( ( myerr = bfd_get_error () ) && myerr != 3 ) {
            fprintf ( stderr, "Unknown bfd error code on check_format %s\n", argv[2] );
        }

        bfd_set_error(0);

        current = NULL;

        fprintf ( stderr, "CALCULATING CURRENT, MAX_ALIGN and ALLOCATING \n\n" );

        for ( s= obj_bfd->sections;s;s=s->next) {

            s->owner = obj_bfd;
            s->output_section = ( s->flags & SEC_ALLOC) ? s : obj_bfd->sections;
            s->output_offset=0;

            if (!(s->flags & SEC_ALLOC))
                continue;

            if (max_align<s->alignment_power)
                max_align=s->alignment_power;

            current=round_up(current,1<<s->alignment_power);

            current+=s->_raw_size;

            fprintf ( stderr, "Section %s: owner = %x, output_offset = %x, output_section = %x (%s)\n",
                      s->name, s->owner, s->output_offset, s->output_section, s->output_section->name );
        }

        fprintf ( stderr, "1\n");
        curr_size=(unsigned long)current;
        max_align=1<<max_align;

        cfd_self      = 0;
        cfd_start     = 0;
        cfd_size      = curr_size + (max_align > sizeof(char *) ? max_align :0);
        
        cfd_start = (void *) malloc ( cfd_size );
        the_start = start_address = cfd_start;
        
        fprintf ( stderr, "ALLOCATED %d bytes \n\n", cfd_size );
        fprintf ( stderr,
                  "max_align = %d, current = %d, cfd_self  = %x, "
                  "cfd_size  = %x, cfd_start = %x\n",
                  max_align, current, cfd_self, cfd_size, cfd_start );

        start_address = ROUND_UP ( start_address, max_align );
        cfd_size = cfd_size - ( start_address - the_start );
        cfd_start = (void *) start_address;	

        fprintf ( stderr,
                  "max_align = %d, current = %d, cfd_self  = %x, "
                  "cfd_size  = %x, cfd_start = %x\n",
                  max_align, current, cfd_self, cfd_size, cfd_start );

        memset ( cfd_start, 0, cfd_size );
        
        for ( m = start_address, s = obj_bfd->sections; s; s=s->next ) {

            if (!(s->flags & SEC_ALLOC))
                continue;

            m=round_up(m,1<<s->alignment_power);
            s->output_section->vma=(unsigned long)m;
            m+=s->_raw_size;
            fprintf ( stderr, "Section address %x\n", s );
            fprintf ( stderr, "m loop Section %s: owner = %x, output_offset = %x, "
                      "output_section = %x (%s), vma = %x, m = %x\n",
                      s->name, s->owner, s->output_offset, s->output_section, s->output_section->name,
                      s->output_section->vma, m );
           
        }

        fprintf ( stderr, "\n\nDOING SOMETHING WITH THE HASHED SYMBOLS\n\n" );
        if ((u=bfd_get_symtab_upper_bound(obj_bfd))<0)
            fprintf ( stderr, "Cannot get symtab uppoer bound.\n" );
        q = (asymbol **) alloca ( u );
        if ( ( v = bfd_canonicalize_symtab ( obj_bfd, q ) ) < 0 )
            fprintf ( stderr, "cannot canonicalize symtab.\n" );
        fprintf ( stderr, "u = %d, v = %d\n", u, v );
        for (u=0;u<v;u++) {

            struct bfd_link_hash_entry *h;

            fprintf ( stderr, "u loop q[%d]->name = %s\n", u, q[u]->name );

            if (!strncmp("init_",q[u]->name,5)) {
                init_address=q[u]->value;
                continue;
            }

            if (!(h=bfd_link_hash_lookup(link_info.hash,q[u]->name, false, false, true))) 
                continue;

            if (h->type!=bfd_link_hash_defined) 
                fprintf ( stderr, "Undefined symbol.\n" );
            
            if (h->u.def.section) {
                q[u]->value=h->u.def.value+h->u.def.section->vma;
                q[u]->flags|=BSF_WEAK;
            } else 
                fprintf ( stderr, "Symbol without section.\n" );

        }

        fprintf ( stderr, "\n\nDOING RELOCATIONS\n\n", cfd_size );
        fflush ( stderr );
        for ( s = obj_bfd->sections; s; s = s->next ) {

            fprintf ( stderr, "s->name %s, s->flags = %x\n", s->name, s->flags );
            if ( ! ( s->flags & SEC_LOAD ) )
                continue;

            link_order.u.indirect.section=s;

            fprintf ( stderr, "About to get reloc section contents\n" );

            fprintf ( stderr, "obj_bfd = %x, section %s, s->output_section = %x, q = %x\n",
                      obj_bfd, s->name, s->output_section, q);

            fflush ( stderr );
            if (!bfd_get_relocated_section_contents(obj_bfd, &link_info,&link_order,
                                                     (void *)(unsigned long)s->output_section->vma,0,q)) 
                fprintf ( stderr, "Cannot get relocated section contents\n");
            
        }
        
        bfd_close ( obj_bfd );
        printf("start address -T %x \n", cfd_start);
    }
}
