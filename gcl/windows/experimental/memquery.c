/*
 * From MSDN - Memory Maps for NT family:
 The virtual address space for 32-bit Windows is typically divided into partitions as follows.

 Low 2GB (0x00000000 through 0x7FFFFFFF) Available to the process. 
 High 2GB (0x80000000 through 0xFFFFFFFF) Reserved for the system. 

 If 4GT RAM Tuning is enabled, the virtual address space for 32-bit Windows is divided into partitions as follows.

 Low 3GB (0x00000000 through 0xBFFFFFFF) Available to the process. 
 High 1GB (0xC0000000 through 0xFFFFFFFF) Reserved for the system. 

 Only processes that have the IMAGE_FILE_LARGE_ADDRESS_AWARE flag set in the image header have access to memory above 2 gigabytes (GB).

 The process address space can be adjusted between 2 GB and 3 GB by using the /USERVA switch in boot.ini. The system address space adjusts as needed.

 * From MSDN - Typical Win95, 98, ME Win32 process memory map:
   0K - ~64K (0xFFFF) Not writable. This boundary is approximate due to the way the system loads some features of Microsoft® MS-DOS®. This memory is private to the process. 
   ~64K (0x10000) - 4 MB (0x3FFFFF) Reserved for MS-DOS compatibility. This memory is fully readable and writable by the process. However, this range of memory may have some MS-DOS–related structures or code in it, so processes should not arbitrarily read from or write to it. This memory is private to the process. 
   4MB (0x400000) - 2GB (0x7FFFFFFF) Available for code and user data. User data is readable and writable by the process. Code is execute-only. This memory is private to the process. 
   2GB (0x80000000) - 3GB (0xBFFFFFFF) Shared area, readable and writable by all processes. A number of system DLLs and other data are loaded into this space. 
   3GB (0xC0000000) - 4GB (0xFFFFFFFF) System memory, readable or writable by any process. However, this is where low-level system code resides, so writing to this region may corrupt the system, with potentially catastrophic consequences. 
   */


#include <windows.h>
#include <stdio.h>

extern SIZE_T FindBigHeap ( LPVOID *pstart, LPVOID *pend,
    LPVOID *p2start, LPVOID *p2end, SIZE_T *p2size );
extern void PrintError ( LPTSTR lpszFunction );

int main () {
    SIZE_T buffer_return_size, heap_size, second_heap_size;
    HANDLE hProcess = GetCurrentProcess ( );
    LPVOID lpMem = 0;
    LPVOID ptr;
    MEMORY_BASIC_INFORMATION buffer, *lpList = &buffer;
    SYSTEM_INFO siSysInfo;
    LPVOID start, end, second_start, second_end;
    
    GetSystemInfo ( &siSysInfo );
    
    while ( lpMem < ( LPVOID ) 0x7FFFFFFF ) {
        buffer_return_size = VirtualQueryEx ( hProcess,
                                              lpMem,
                                              lpList,
                                              sizeof (MEMORY_BASIC_INFORMATION) );

        fprintf ( stderr,
                  "System Page size 0x%x\n"
                  "Minimum application address 0x%lx\n"
                  "Maximum application address 0x%lx\n"
                  "Allocation granularity 0x%x\n"
                  "VirtualQueryEx returned\n"
                  "\t buffer return size 0x%x\n"
                  "\t query base address 0x%lx\n"
                  "\t allocation base address 0x%lx\n"
                  "\t initial allocation protection 0x%x\n"
                  "\t size of region with identical attributes 0x%lx\n"
                  "\t state of those pages in the region 0x%x\n"
                  "\t access protection of the region 0x%x\n"
                  "\t type 0x%x\n",
                  siSysInfo.dwPageSize,
                  siSysInfo.lpMinimumApplicationAddress,
                  siSysInfo.lpMaximumApplicationAddress,
                  siSysInfo.dwAllocationGranularity,
                  buffer_return_size,
                  lpList->BaseAddress,
                  lpList->AllocationBase,
                  lpList->AllocationProtect,
                  lpList->RegionSize,
                  lpList->State,
                  lpList->Protect,
                  lpList->Type );
        lpMem += lpList->RegionSize;
    }
    heap_size = FindBigHeap ( &start, &end,
                              &second_start, &second_end, &second_heap_size );
    fprintf ( stderr,
              "Potential heap starts at 0x%lx, "
              "end 0x%lx, size 0x%lx\n",
              start, end, heap_size );
    fprintf ( stderr,
              "Second potential heap starts at 0x%lx, "
              "end 0x%lx, size 0x%lx\n",
              second_start, second_end, second_heap_size );
    
    ptr = VirtualAlloc ( start, heap_size,
                         MEM_RESERVE,
                         PAGE_NOACCESS );
    fprintf ( stderr, "Got 0x%lx back from reservation call.\n", ptr );
    if ( NULL == ptr ) {
        PrintError ( "Reservation" );
    }
    ptr = VirtualAlloc ( start, heap_size,
                         MEM_COMMIT,
                         PAGE_READWRITE );
    fprintf ( stderr, "Got 0x%lx back from commit call.\n", ptr );
    if ( NULL == ptr ) {
        PrintError ( "Commit" );
    }
    if ( 0 == VirtualFree ( start, 0, MEM_RELEASE ) ) {
        PrintError ( "VirtualFree" );
    }
    return ( 0 );
}

SIZE_T FindBigHeap ( LPVOID *pstart, LPVOID *pend,
    LPVOID *p2start, LPVOID *p2end, SIZE_T *p2size ) {
    SIZE_T buffer_return_size;
    HANDLE hProcess = GetCurrentProcess();
    LPCVOID lpMem = 0;
    LPVOID ptr;
    MEMORY_BASIC_INFORMATION buffer, *lpList = &buffer;
    SYSTEM_INFO siSysInfo;
    SIZE_T best_size = 0, second_best_size = 0;
    LPVOID best_start = NULL, second_best_start = NULL;
    
    while ( ( lpMem < ( LPCVOID ) 0x1a000000 ) && ( best_size < 256000 ) ) {
        buffer_return_size =
            VirtualQueryEx ( hProcess,
                             lpMem,
                             lpList,
                             sizeof (MEMORY_BASIC_INFORMATION) );
        if ( MEM_FREE == lpList->State ) {
            if ( lpList->RegionSize > best_size ) {
                if ( best_size > second_best_size ) {
                    second_best_size = best_size;
                    second_best_start = best_start;
                    fprintf ( stderr,
                              "New second best from 0x%lx to 0x%lx"
                              " (0x%lx bytes)\n",
                              second_best_start,
                              second_best_size + second_best_start - 1,
                              second_best_size );
                }
                best_size = lpList->RegionSize;
                best_start = lpList->BaseAddress;
                fprintf ( stderr, "New best from 0x%lx to 0x%lx (0x%lx bytes)\n",
                          best_start, best_size + best_start - 1, best_size );
            } else {
                if ( lpList->RegionSize > second_best_size ) {
                    second_best_size = lpList->RegionSize;
                    second_best_start = lpList->BaseAddress;
                    fprintf ( stderr,
                              "New second best from 0x%lx to 0x%lx"
                              " (0x%lx bytes)\n",
                              second_best_start,
                              second_best_size + second_best_start - 1,
                              second_best_size );
                }
            }
        }
        lpMem += lpList->RegionSize;
    }
    *pstart = best_start;
    *pend   = best_size + best_start - 1;
    *p2start = second_best_start;
    *p2end   = second_best_size + second_best_start - 1;
    *p2size  = second_best_size;
    return ( best_size );
}

void PrintError ( LPTSTR lpszFunction ) { 
    TCHAR szBuf[80]; 
    LPVOID lpMsgBuf;
    DWORD dw = GetLastError(); 

    FormatMessage ( FORMAT_MESSAGE_ALLOCATE_BUFFER | 
                    FORMAT_MESSAGE_FROM_SYSTEM,
                    NULL,
                    dw,
                    MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                    (LPTSTR) &lpMsgBuf,
                    0, NULL );

    fprintf ( stderr, 
              "%s failed with error %d: %s", 
              lpszFunction, dw, lpMsgBuf ); 
 
    LocalFree(lpMsgBuf);
    /*ExitProcess(dw); */
}
