/* to be included by machine.h when the
   gnu coff encapsulation scheme is used */

#define COFF_ENCAPSULATE

#define MEM_SAVE_LOCALS \
  struct coffheader header1;\
  struct coffscn *tp, *dp, *bp;\
  struct exec header;\
  int stsize

#define READ_HEADER \
        fread(&header1, sizeof(header1), 1, original); \
        tp = &header1.scns[0]; \
        dp = &header1.scns[1]; \
        bp = &header1.scns[2]; \
        fread(&header, sizeof(header), 1, original); \
        data_begin=DATA_BEGIN; \
        data_end = core_end; \
        original_data = header.a_data; \
        header.a_data = data_end - data_begin; \
        header.a_bss = 0; \
        dp->s_size = header.a_data;      \
        bp->s_paddr = dp->s_vaddr + dp->s_size; \
        bp->s_vaddr = bp->s_paddr;       \
        bp->s_size = 0;                  \
        header1.tsize = tp->s_size;   \
        header1.dsize = dp->s_size;   \
        header1.bsize = bp->s_size;   \
        fwrite(&header1, sizeof(header1), 1, save); \
        fwrite(&header, sizeof(header), 1, save);

#define FILECPY_HEADER \
        filecpy(save, original, header.a_text);

#define  COPY_TO_SAVE \
  filecpy(save, original, header.a_syms+header.a_trsize+header.a_drsize); \
  fread(&stsize, sizeof(stsize), 1, original); \
  fwrite(&stsize, sizeof(stsize), 1, save); \
  filecpy(save, original, stsize - sizeof(stsize))
