#ifndef UNIXSAVE
#include <config.h>
#endif
/* #include <stdlib.h> */ 	/* _fmode */
#include <stdio.h>
#include <fcntl.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#ifdef _GNU_H_WINDOWS_H 
#include "cyglacks.h"
#endif
#undef DBEGIN
#define DBEGIN 0x400000

#include "ntheap.h"
/* Info for keeping track of our heap.  */
unsigned char *data_region_base = UNINIT_PTR;
unsigned char *data_region_end = UNINIT_PTR;
unsigned char *real_data_region_end = UNINIT_PTR;
unsigned long  data_region_size = UNINIT_LONG;
unsigned long  reserved_heap_size = UNINIT_LONG;


void mymemcpy(void *a, void *b ,int n)
{
  char *p=a;
  char *q=b;
  while(--n>=0)
    { int c = q[0];
    q++;
     p[0]=c;
     p++;
    }
}

PIMAGE_SECTION_HEADER get_section_named(PIMAGE_NT_HEADERS nt_header,char *name);

/* Dump out .data and .bss sections into a new executable.  */
void
unexec (char *new_name, char *old_name, void *start_data, void *start_bss,
	void *entry_address)
{
  file_data in_file, out_file;
  unsigned long size,header_size,file_size,i;
  int last,foffset;
  PIMAGE_DOS_HEADER old_dos_header,new_dos_header;
  PIMAGE_NT_HEADERS old_nt_header,new_nt_header;
  PIMAGE_SECTION_HEADER old_section, old_sptr,old_data_section;
  PIMAGE_SECTION_HEADER new_section, new_sptr,new_data_section;
  PIMAGE_SECTION_HEADER s;
  long membase;
  char *base;

  if (!get_allocation_unit())
    cache_system_info ();
  if (!open_input_file (&in_file, old_name)) {
          printf ("Failed to open %s (%d)...bailing.\n", 
	      old_name, GetLastError ());
   exit (1);
  }
  
  old_dos_header = (PIMAGE_DOS_HEADER) in_file.file_base;
  if (old_dos_header->e_magic != IMAGE_DOS_SIGNATURE) 
    {
      printf ("Unknown EXE header in %s...bailing.\n", in_file.name);
      exit (1);
    }
  old_nt_header = (PIMAGE_NT_HEADERS) (((unsigned long) old_dos_header) + 
				  old_dos_header->e_lfanew);
  if (old_nt_header == NULL) 
    {
      printf ("Failed to find IMAGE_NT_HEADER in %s...bailing.\n", 
	     in_file.name);
      exit (1);
    }

  /* Check the NT header signature ...  */
  if (old_nt_header->Signature != IMAGE_NT_SIGNATURE) 
    {
      printf ("Invalid IMAGE_NT_SIGNATURE 0x%x in %s...bailing.\n",
	      old_nt_header->Signature, in_file.name);
    }

  /* Flip through the sections for .data and .bss ...  */
  old_section = (PIMAGE_SECTION_HEADER) IMAGE_FIRST_SECTION (old_nt_header);
  old_sptr= get_section_named(old_nt_header,".bss");
  old_data_section= get_section_named(old_nt_header,".data");
  header_size = old_section[0].PointerToRawData ;
		
  
  base = alloca(header_size);
  memcpy (base,in_file.file_base, header_size);
  new_dos_header = (PIMAGE_DOS_HEADER) base;
  new_nt_header = (PIMAGE_NT_HEADERS) (((unsigned long) new_dos_header) + 
				  new_dos_header->e_lfanew);
  new_section = (PIMAGE_SECTION_HEADER) IMAGE_FIRST_SECTION (new_nt_header);
  /* fix up the .bss section so that it is stored in file and
     mark its characteristics to show load.
   */
  if (old_sptr->Characteristics != old_data_section->Characteristics)
    {
      int j;
      new_sptr= get_section_named(new_nt_header,".bss");
      new_data_section= get_section_named(new_nt_header,".data");
      new_sptr->Characteristics = old_data_section->Characteristics;
      j = new_sptr - new_section;
#define S_ALIGN (1<<3)
#define ROUND_UP(x,n) (((((unsigned int)x)+(n)-1)/(n))*(n))      
      new_sptr->PointerToRawData = new_sptr[1].PointerToRawData;
      new_sptr->SizeOfRawData = ROUND_UP(new_sptr->Misc.VirtualSize,S_ALIGN);
      foffset = new_sptr->SizeOfRawData;
      
      
      
      foffset = new_sptr->Misc.VirtualSize;
      for(i= new_sptr-new_section+1; i < new_nt_header->FileHeader.NumberOfSections; i++)
	{int tem ;
	new_section[i].PointerToRawData += foffset;
	tem = new_section[i].PointerToRawData + new_section[i].SizeOfRawData;
	if (last < tem )
	  last = tem;
	}
    }

  membase = old_nt_header->OptionalHeader.ImageBase;
  /* if there is new data from sbrk
     add it into .dataX section
     */     
  if (real_data_region_end - data_region_base) {
	s = get_section_named(new_nt_header,".dataX");
	if (s ) {
	s->SizeOfRawData = real_data_region_end - data_region_base;
	} else {
      /* tack in a new section */	  
	s = &new_section[new_nt_header->FileHeader.NumberOfSections];
	*s = *new_data_section;
	strcpy(s->Name,".dataX");
	s->VirtualAddress =  data_region_base - (unsigned char *)membase;
	s->SizeOfRawData = real_data_region_end - data_region_base;
	s->PointerToRawData = ROUND_UP(last,S_ALIGN) ;
	new_nt_header->FileHeader.NumberOfSections += 1;
	if ((char *)&s[1] -base > header_size)
	  { printf("unexpected fit");
	  /* to do: we will have to recode moving all sections up
	   */
	  exit(1);
	  }
	}

    }
    s = &new_section[new_nt_header->FileHeader.NumberOfSections-1];
    file_size = s->PointerToRawData + s->SizeOfRawData;
    if (!open_output_file (&out_file, new_name, file_size))
    {
      printf ("Failed to open %s (%d)...bailing.\n", 
	      new_name, GetLastError ());
      exit (1);
    }
    for(i=0; i < file_size; i++)
      out_file.file_base[i]='a';
    

    memcpy (out_file.file_base,base, header_size);

    for(i= 0; i < new_nt_header->FileHeader.NumberOfSections; i++)
      {  PIMAGE_SECTION_HEADER new,old;
	new = &new_section[i];
	old = &old_section[i];
	if (new->Characteristics == old_data_section->Characteristics)
	  { mymemcpy(out_file.file_base + new->PointerToRawData,
		    (void *) (new->VirtualAddress + membase),
		     new->SizeOfRawData)
	      ;
	  } else if (new->SizeOfRawData)
	    {
	       memcpy(out_file.file_base + new->PointerToRawData,
		     in_file.file_base+
		      old->PointerToRawData
		      ,new->SizeOfRawData);

	    }
      }
    close_file_data (&in_file);
    close_file_data (&out_file);
}

PIMAGE_SECTION_HEADER
get_section_named(PIMAGE_NT_HEADERS nt_header,char *name)
{
  int i;
  PIMAGE_SECTION_HEADER section, data_section;
  section = (PIMAGE_SECTION_HEADER) IMAGE_FIRST_SECTION (nt_header);
    for (i = 0; i < nt_header->FileHeader.NumberOfSections; i++)
      {
	if (strcmp(section[i].Name,name) == 0)
	  return &section[i];
      }
    return 0;
}

int billy;
const char jim[]="before";
char *jill = jim;
main(int argc,char *argv[])
{
  printf("billy=%d,jill=%s",billy,jill);
  if (billy == 0) {
    billy=1;
    jill = sbrk(101);
    strcpy(jill,"hello");
  }
  unexec(argv[1],argv[0],0,0,0);
  return 0;
}
  







/* File handling.  */


int
open_input_file (file_data *p_file, char *filename)
{
  HANDLE file;
  HANDLE file_mapping;
  void  *file_base;
  unsigned long size, upper_size;

  file = CreateFile (filename, GENERIC_READ, FILE_SHARE_READ, NULL,
		     OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
  if (file == INVALID_HANDLE_VALUE) 
    return FALSE;

  size = GetFileSize (file, &upper_size);
  file_mapping = CreateFileMapping (file, NULL, PAGE_READONLY, 
				    0, size, NULL);
  if (!file_mapping) 
    return FALSE;

  file_base = MapViewOfFile (file_mapping, FILE_MAP_READ, 0, 0, size);
  if (file_base == 0) 
    return FALSE;

  p_file->name = filename;
  p_file->size = size;
  p_file->file = file;
  p_file->file_mapping = file_mapping;
  p_file->file_base = file_base;

  return TRUE;
}

int
open_output_file (file_data *p_file, char *filename, unsigned long size)
{
  HANDLE file;
  HANDLE file_mapping;
  void  *file_base;

  file = CreateFile (filename, GENERIC_READ | GENERIC_WRITE, 0, NULL,
		     CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
  if (file == INVALID_HANDLE_VALUE) 
    return FALSE;

  file_mapping = CreateFileMapping (file, NULL, PAGE_READWRITE, 
				    0, size, NULL);
  if (!file_mapping) 
    return FALSE;
  
  file_base = MapViewOfFile (file_mapping, FILE_MAP_WRITE, 0, 0, size);
  if (file_base == 0) 
    return FALSE;
  
  p_file->name = filename;
  p_file->size = size;
  p_file->file = file;
  p_file->file_mapping = file_mapping;
  p_file->file_base = file_base;

  return TRUE;
}

/* Close the system structures associated with the given file.  */
void
close_file_data (file_data *p_file)
{
    UnmapViewOfFile (p_file->file_base);
    CloseHandle (p_file->file_mapping);
    CloseHandle (p_file->file);
}





/* #include "lisp.h" */  /* for VALMASK */
#define VALMASK -1
/* try for 500 MB of address space */
#define VALBITS 29

static char *
allocate_heap (void)
{
  /* The base address for our GNU malloc heap is chosen in conjuction
     with the link settings for temacs.exe which control the stack size,
     the initial default process heap size and the executable image base
     address.  The link settings and the malloc heap base below must all
     correspond; the relationship between these values depends on how NT
     and Win95 arrange the virtual address space for a process (and on
     the size of the code and data segments in temacs.exe).

     The most important thing is to make base address for the executable
     image high enough to leave enough room between it and the 4MB floor
     of the process address space on Win95 for the primary thread stack,
     the process default heap, and other assorted odds and ends
     (eg. environment strings, private system dll memory etc) that are
     allocated before temacs has a chance to grab its malloc arena.  The
     malloc heap base can then be set several MB higher than the
     executable image base, leaving enough room for the code and data
     segments.

     Because some parts of Emacs can use rather a lot of stack space
     (for instance, the regular expression routines can potentially
     allocate several MB of stack space) we allow 8MB for the stack.

     Allowing 1MB for the default process heap, and 1MB for odds and
     ends, we can base the executable at 16MB and still have a generous
     safety margin.  At the moment, the executable has about 810KB of
     code (for x86) and about 550KB of data - on RISC platforms the code
     size could be roughly double, so if we allow 4MB for the executable
     we will have plenty of room for expansion.

     Thus we would like to set the malloc heap base to 20MB.  However,
     Win95 refuses to allocate the heap starting at this address, so we
     set the base to 27MB to make it happy.  Since Emacs now leaves
     28 bits available for pointers, this lets us use the remainder of
     the region below the 256MB line for our malloc arena - 229MB is
     still a pretty decent arena to play in!  */

  unsigned long base = DBEGIN;   /*  27MB */
  /*   unsigned long base = 0x01B00000; */  /*  27MB */
  unsigned long end  = 1 << VALBITS; /* 256MB */
  void *ptr = NULL;

#define NTHEAP_PROBE_BASE 1
#if NTHEAP_PROBE_BASE /* This is never normally defined */
  /* Try various addresses looking for one the kernel will let us have.  */
  while (!ptr && (base < end))
    {
      reserved_heap_size = end - base;
      ptr = VirtualAlloc ((void *) base,
			  get_reserved_heap_size (),
			  MEM_RESERVE,
			  PAGE_NOACCESS);
      base += 0x00100000;  /* 1MB increment */
    }
#else
  reserved_heap_size = end - base;
  ptr = VirtualAlloc ((void *) base,
		      get_reserved_heap_size (),
		      MEM_RESERVE,
		      PAGE_NOACCESS);
#endif

  return ptr;
}

/* This gives us the page size and the size of the allocation unit on NT.  */
SYSTEM_INFO sysinfo_cache;
unsigned long syspage_mask = 0;
int nt_major_version;
int nt_minor_version;
/* Distinguish between Windows NT and Windows 95.  */
int os_subtype;

/* Cache information describing the NT system for later use.  */
void
cache_system_info (void)
{
  union 
    {
      struct info 
	{
	  char  major;
	  char  minor;
	  short platform;
	} info;
      DWORD data;
    } version;

  if (os_subtype) return;

  /* Cache the version of the operating system.  */
  version.data = GetVersion ();
  nt_major_version = version.info.major;
  nt_minor_version = version.info.minor;

  if (version.info.platform & 0x8000)
    os_subtype = OS_WIN95;
  else
    os_subtype = OS_NT;

  /* Cache page size, allocation unit, processor type, etc.  */
  GetSystemInfo (&sysinfo_cache);
  syspage_mask = sysinfo_cache.dwPageSize - 1;
}



/* Emulate Unix sbrk.  */
void *
sbrk (unsigned long increment)
{
  void *result;
  long size = (long) increment;

  cache_system_info();
    
  /* Allocate our heap if we haven't done so already.  */
  if (data_region_base == UNINIT_PTR) 
    {
      data_region_base = allocate_heap ();
      if (!data_region_base)
	return NULL;

      /* Ensure that the addresses don't use the upper tag bits since
	 the Lisp type goes there.  */
      if (((unsigned long) data_region_base & ~VALMASK) != 0) 
	{
	  printf ("Error: The heap was allocated in upper memory.\n");
	  exit (1);
	}

      data_region_end = data_region_base;
      real_data_region_end = data_region_end;
      data_region_size = get_reserved_heap_size ();
    }
  
  result = data_region_end;

  /* If size is negative, shrink the heap by decommitting pages.  */
  if (size < 0) 
    {
      int new_size;
      unsigned char *new_data_region_end;

      size = -size;

      /* Sanity checks.  */
      if ((data_region_end - size) < data_region_base)
	return NULL;

      /* We can only decommit full pages, so allow for 
	 partial deallocation [cga].  */
      new_data_region_end = (data_region_end - size);
      new_data_region_end = (unsigned char *)
	((long) (new_data_region_end + syspage_mask) & ~syspage_mask);
      new_size = real_data_region_end - new_data_region_end;
      real_data_region_end = new_data_region_end;
      if (new_size > 0) 
	{
	  /* Decommit size bytes from the end of the heap.  */
	  if (!VirtualFree (real_data_region_end, new_size, MEM_DECOMMIT))
	    return NULL;
 	}

      data_region_end -= size;
    } 
  /* If size is positive, grow the heap by committing reserved pages.  */
  else if (size > 0) 
    {
      /* Sanity checks.  */
      if ((data_region_end + size) >
	  (data_region_base + get_reserved_heap_size ()))
	return NULL;

      /* Commit more of our heap. */
      if (VirtualAlloc (data_region_end, size, MEM_COMMIT,
			PAGE_READWRITE) == NULL)
	return NULL;
      data_region_end += size;

      /* We really only commit full pages, so record where
	 the real end of committed memory is [cga].  */
      real_data_region_end = (unsigned char *)
	  ((long) (data_region_end + syspage_mask) & ~syspage_mask);
    }
  
  return result;
}
