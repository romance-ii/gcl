 

/*
 * spp.c
 * Extracts the symbol table from an HP-UX excutable file
 * to be used in a later pass of the linker. (ld does not
 * support the -A option.)
 */

#include <stdio.h>
#include <a.out.h>

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

stabcpy(to,from,n)
FILE *to, *from;
register int n;
{
	char buffer[BUFSIZ];
	struct nlist_ nbuf;
	int len;

	for (;;)
		if (n <= 0) break;
		else {
			fread(&nbuf,sizeof(nbuf),1,from);
			len = nbuf.n_length;
			fread(buffer,len,1,from);
			buffer[len] = '\0';
			nbuf.n_type = EXTERN | ABS;
			if (((strncmp(buffer,"_end",4)   == NULL) &&
			     (len == 4)) ||
			    ((strncmp(buffer,"_etext",6) == NULL) &&
			     (len == 6)) ||
			    ((strncmp(buffer,"_edata",6) == NULL) &&
			     (len == 6)))
			   buffer[1] = 'E';
			fwrite(&nbuf,sizeof(nbuf),1,to);
			fwrite(buffer,len,1,to);
			n -= sizeof(nbuf) + nbuf.n_length;
		}
}

main(argc,argv)
int argc;
char *argv[];
{
	FILE *file,*sfile;
	struct exec header;	
	char sfile_name[BUFSIZ];
	long skip,size0,size1;

	if(argc != 2) { 
		fprintf(stderr,"usage: spp <exefile>\n");
		exit(1);
	}
	if((file = fopen(argv[1],"r")) == NULL) {
		fprintf(stderr,"can't open exefile: %s\n", argv[1]);
		exit(1);
	}
	strcpy(sfile_name,argv[1]);
	strcat(sfile_name,".stb");
	if((sfile = fopen(sfile_name,"w")) == NULL) {
		fprintf(stderr,"can't create stbfile: %s\n", 
			sfile_name);
		exit(1);
	}
	fread(&header,sizeof(header),1,file);
	skip = MODCAL_OFFSET(header);
	size0 = header.a_pasint;
	size1= header.a_dnttsize +
	       header.a_sltsize + header.a_vtsize + header.a_trsize +
	       header.a_drsize;
	header.a_magic.file_type = RELOC_MAGIC;
	header.a_text = 0;
	header.a_data = 0;
	header.a_bss  = 0;
	fwrite(&header,sizeof(header),1,sfile);
	fseek(file,skip,0);
	filecpy(sfile,file,size0);
	stabcpy(sfile,file,header.a_lesyms);
	filecpy(sfile,file,size1);
	fclose(file);
	fclose(sfile);
}	
