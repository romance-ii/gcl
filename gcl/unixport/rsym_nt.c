/* defining IN_SFASL gets us fopen_binary  */
#define IN_RSYM

#include "config.h"
#include <stdio.h>
#include "ext_sym.h"




struct lsymbol_table tab;

int main(int argc,char *argv[])
{
    char buf[1000];
    char *in = argv[1];
    char *out = argv[2];
    if ( argc != 3 ) {
        perror("bad arg count");
        fflush(stdout);
        exit(1);
    }

    fprintf ( stderr, "rsym_nt: %s %s\n", in, out );
    sprintf ( buf, "nm -g %s > _rsym1", argv[1] );
    if ( system ( buf ) ) {
        printf("failed: %s", buf);
        exit(1);
    }
    {
        FILE *fp = fopen("_rsym1","rb");
        FILE *symout;
        char buf1[1000];
        symout = fopen ( out, "wb" );
        if ( !symout ) {
            perror ( out );
            exit ( 1 );
        };
        tab.n_symbols=0;
        tab.tot_leng=0;
        fseek( symout, sizeof ( struct lsymbol_table ), 0 );
        {
            int addr;
            char ch;
            char *name;
            char name1[1000];

            while (1) {
                name = name1;
                fgets(buf1,sizeof(buf1),fp);
                if ( 3 == sscanf ( buf1, "%x %c %s", &addr, &ch, name )
                     && ch != '?' ) {
                    tab.n_symbols++;
                    fwrite ( (char *)&addr, sizeof ( int ), 1, symout );
                    while ( tab.tot_leng++, *name )
                        putc ( *name++, symout );
                    putc ( 0, symout );
                }
                if ( feof ( fp ) ) break;
            }
            fseek ( symout, 0, 0 );
            fwrite ( &tab, sizeof ( tab ), 1, symout );
            
            fclose ( symout );
        }
    }
    exit ( 0 );
}
