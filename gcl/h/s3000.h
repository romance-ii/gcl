#include "att.h"
#define S3000


#define ADDITIONAL_FEATURES \
  ADD_FEATURE("S3000");\
  ADD_FEATURE("SYSTEM-V")




#undef READ_HEADER
#define READ_HEADER \
	fread(&fileheader, sizeof(fileheader), 1, original); \
	fread(&header, sizeof(header), 1, original); \
	data_begin = (char *)header.data_start; \
	data_end = core_end; \
	original_data = header.a_data; \
	header.a_data = data_end - data_begin; \
	diff = header.a_data - original_data; \
	header.a_bss = sbrk(0) - core_end; \
	fileheader.f_symptr += diff; \
	fwrite(&fileheader, sizeof(fileheader), 1, save);\
	fwrite(&header, sizeof(header), 1, save); \
	fread(&sectionheader, sizeof(sectionheader), 1, original); \
	if (sectionheader.s_lnnoptr) \
		sectionheader.s_lnnoptr += diff; \
	fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	fread(&sectionheader, sizeof(sectionheader), 1, original); \
	sectionheader.s_size += diff; \
	if (sectionheader.s_lnnoptr) \
		sectionheader.s_lnnoptr += diff; \
	fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	fread(&sectionheader, sizeof(sectionheader), 1, original); \
	sectionheader.s_paddr += diff; \
	sectionheader.s_vaddr += diff; \
	sectionheader.s_size = header.a_bss; \
 /*  S3000 needs this ! */ \
        if (sectionheader.s_scnptr) \
                sectionheader.s_scnptr += diff; \
 /* end s3000 */ \
	if (sectionheader.s_lnnoptr) \
		sectionheader.s_lnnoptr += diff; \
	fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	for (n = 4;  n <= fileheader.f_nscns;  n++) { \
		fread(&sectionheader, sizeof(sectionheader), 1, original); \
		if (sectionheader.s_scnptr) \
			sectionheader.s_scnptr += diff; \
		if (sectionheader.s_lnnoptr) \
			sectionheader.s_lnnoptr += diff; \
		fwrite(&sectionheader, sizeof(sectionheader), 1, save); \
	} \
	filecpy(save, original, header.a_text);


  
