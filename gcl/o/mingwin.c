#include "include.h"



#include "windows.h"
#include "errno.h"
#include "signal.h"
#include "stdlib.h"

#ifdef DODEBUG
#define dprintf(s,arg) \
  do {fprintf(stderr,s,arg); \
    fflush(stderr); }\
    while(0)
#else 
#define dprintf(s,arg)
#endif     

#ifndef EWOULDBLOCK
#define EWOULDBLOCK EAGAIN
#endif



#include "errno.h"
#include <tchar.h>
#include <time.h>
#include <winsock2.h>
#include <winsock.h>


#define Tcl_GetErrno() errno
#define Tcl_SetErrno(n) errno=n

/*
 * The following structure contains pointers to all of the WinSock API entry
 * points used by Tcl.  It is initialized by InitSockets.  Since we
 * dynamically load Winsock.dll on demand, we must use this function table
 * to refer to functions in the socket API.
 */

static struct {
    HINSTANCE hInstance;	/* Handle to WinSock library. */
    SOCKET (PASCAL FAR *accept)(SOCKET s, struct sockaddr FAR *addr,
	    int FAR *addrlen);
    int (PASCAL FAR *bind)(SOCKET s, const struct sockaddr FAR *addr,
	    int namelen);
    int (PASCAL FAR *closesocket)(SOCKET s);
    int (PASCAL FAR *connect)(SOCKET s, const struct sockaddr FAR *name,
	    int namelen);
    int (PASCAL FAR *ioctlsocket)(SOCKET s, long cmd, u_long FAR *argp);
    int (PASCAL FAR *getsockopt)(SOCKET s, int level, int optname,
	    char FAR * optval, int FAR *optlen);
    u_short (PASCAL FAR *htons)(u_short hostshort);
    unsigned long (PASCAL FAR *inet_addr)(const char FAR * cp);
    char FAR * (PASCAL FAR *inet_ntoa)(struct in_addr in);
    int (PASCAL FAR *listen)(SOCKET s, int backlog);
    u_short (PASCAL FAR *ntohs)(u_short netshort);
    int (PASCAL FAR *recv)(SOCKET s, char FAR * buf, int len, int flags);
    int (PASCAL FAR *select)(int nfds, fd_set FAR * readfds,
	    fd_set FAR * writefds, fd_set FAR * exceptfds,
	    const struct timeval FAR * tiemout);
    int (PASCAL FAR *send)(SOCKET s, const char FAR * buf, int len, int flags);
    int (PASCAL FAR *setsockopt)(SOCKET s, int level, int optname,
	    const char FAR * optval, int optlen);
    int (PASCAL FAR *shutdown)(SOCKET s, int how);
    SOCKET (PASCAL FAR *socket)(int af, int type, int protocol);
    struct hostent FAR * (PASCAL FAR *gethostbyname)(const char FAR * name);
    struct hostent FAR * (PASCAL FAR *gethostbyaddr)(const char FAR *addr,
            int addrlen, int addrtype);
    int (PASCAL FAR *gethostname)(char FAR * name, int namelen);
    int (PASCAL FAR *getpeername)(SOCKET sock, struct sockaddr FAR *name,
            int FAR *namelen);
    struct servent FAR * (PASCAL FAR *getservbyname)(const char FAR * name,
	    const char FAR * proto);
    int (PASCAL FAR *getsockname)(SOCKET sock, struct sockaddr FAR *name,
            int FAR *namelen);
    int (PASCAL FAR *WSAStartup)(WORD wVersionRequired, LPWSADATA lpWSAData);
    int (PASCAL FAR *WSACleanup)(void);
    int (PASCAL FAR *WSAGetLastError)(void);
    int (PASCAL FAR *WSAAsyncSelect)(SOCKET s, HWND hWnd, u_int wMsg,
	    long lEvent);
} winSock;

static int SocketsEnabled();
static void close_winsock();
extern void doReverse ( char *s, int n );


/*
 *----------------------------------------------------------------------
 *
 * InitSockets --
 *
 *	Initialize the socket module.  Attempts to load the wsock32.dll
 *	library and set up the winSock function table.  If successful,
 *	registers the event window for the socket notifier code.
 *
 *	Assumes Mutex is held.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Dynamically loads wsock32.dll, and registers a new window
 *	class and creates a window for use in asynchronous socket
 *	notification.
 *
 *----------------------------------------------------------------------
 */


static void
InitSockets()
{
    WSADATA wsaData;
    static int initialized;
    if (! initialized) {
	initialized = 1;
	winSock.hInstance = LoadLibraryA("wsock32.dll");

	/*
	 * Initialize the function table.
	 */

	if (!SocketsEnabled()) {
	    return;
	}
    
	winSock.accept = (SOCKET (PASCAL FAR *)(SOCKET s,
		struct sockaddr FAR *addr, int FAR *addrlen))
	    GetProcAddress(winSock.hInstance, "accept");
	winSock.bind = (int (PASCAL FAR *)(SOCKET s,
		const struct sockaddr FAR *addr, int namelen))
	    GetProcAddress(winSock.hInstance, "bind");
	winSock.closesocket = (int (PASCAL FAR *)(SOCKET s))
	    GetProcAddress(winSock.hInstance, "closesocket");
	winSock.connect = (int (PASCAL FAR *)(SOCKET s,
		const struct sockaddr FAR *name, int namelen))
	    GetProcAddress(winSock.hInstance, "connect");
	winSock.ioctlsocket = (int (PASCAL FAR *)(SOCKET s, long cmd,
		u_long FAR *argp))
	    GetProcAddress(winSock.hInstance, "ioctlsocket");
	winSock.getsockopt = (int (PASCAL FAR *)(SOCKET s,
		int level, int optname, char FAR * optval, int FAR *optlen))
	    GetProcAddress(winSock.hInstance, "getsockopt");
	winSock.htons = (u_short (PASCAL FAR *)(u_short hostshort))
	    GetProcAddress(winSock.hInstance, "htons");
	winSock.inet_addr = (unsigned long (PASCAL FAR *)(const char FAR *cp))
	    GetProcAddress(winSock.hInstance, "inet_addr");
	winSock.inet_ntoa = (char FAR * (PASCAL FAR *)(struct in_addr in))
	    GetProcAddress(winSock.hInstance, "inet_ntoa");
	winSock.listen = (int (PASCAL FAR *)(SOCKET s, int backlog))
	    GetProcAddress(winSock.hInstance, "listen");
	winSock.ntohs = (u_short (PASCAL FAR *)(u_short netshort))
	    GetProcAddress(winSock.hInstance, "ntohs");
	winSock.recv = (int (PASCAL FAR *)(SOCKET s, char FAR * buf,
		int len, int flags)) GetProcAddress(winSock.hInstance, "recv");
	winSock.select = (int (PASCAL FAR *)(int nfds, fd_set FAR * readfds,
		fd_set FAR * writefds, fd_set FAR * exceptfds,
		const struct timeval FAR * tiemout))
	    GetProcAddress(winSock.hInstance, "select");
	winSock.send = (int (PASCAL FAR *)(SOCKET s, const char FAR * buf,
		int len, int flags)) GetProcAddress(winSock.hInstance, "send");
	winSock.setsockopt = (int (PASCAL FAR *)(SOCKET s, int level,
		int optname, const char FAR * optval, int optlen))
	    GetProcAddress(winSock.hInstance, "setsockopt");
	winSock.shutdown = (int (PASCAL FAR *)(SOCKET s, int how))
	    GetProcAddress(winSock.hInstance, "shutdown");
	winSock.socket = (SOCKET (PASCAL FAR *)(int af, int type,
		int protocol)) GetProcAddress(winSock.hInstance, "socket");
	winSock.gethostbyaddr = (struct hostent FAR * (PASCAL FAR *)
		(const char FAR *addr, int addrlen, int addrtype))
	    GetProcAddress(winSock.hInstance, "gethostbyaddr");
	winSock.gethostbyname = (struct hostent FAR * (PASCAL FAR *)
		(const char FAR *name))
	    GetProcAddress(winSock.hInstance, "gethostbyname");
	winSock.gethostname = (int (PASCAL FAR *)(char FAR * name,
		int namelen)) GetProcAddress(winSock.hInstance, "gethostname");
	winSock.getpeername = (int (PASCAL FAR *)(SOCKET sock,
		struct sockaddr FAR *name, int FAR *namelen))
	    GetProcAddress(winSock.hInstance, "getpeername");
	winSock.getservbyname = (struct servent FAR * (PASCAL FAR *)
		(const char FAR * name, const char FAR * proto))
	    GetProcAddress(winSock.hInstance, "getservbyname");
	winSock.getsockname = (int (PASCAL FAR *)(SOCKET sock,
		struct sockaddr FAR *name, int FAR *namelen))
	    GetProcAddress(winSock.hInstance, "getsockname");
	winSock.WSAStartup = (int (PASCAL FAR *)(WORD wVersionRequired,
		LPWSADATA lpWSAData)) GetProcAddress(winSock.hInstance, "WSAStartup");
	winSock.WSACleanup = (int (PASCAL FAR *)(void))
	    GetProcAddress(winSock.hInstance, "WSACleanup");
	winSock.WSAGetLastError = (int (PASCAL FAR *)(void))
	    GetProcAddress(winSock.hInstance, "WSAGetLastError");
	winSock.WSAAsyncSelect = (int (PASCAL FAR *)(SOCKET s, HWND hWnd,
		u_int wMsg, long lEvent))
	    GetProcAddress(winSock.hInstance, "WSAAsyncSelect");
    
	/*
	 * Now check that all fields are properly initialized. If not, return
	 * zero to indicate that we failed to initialize properly.
	 */
    
	if ((winSock.hInstance == NULL) ||
		(winSock.accept == NULL) ||
		(winSock.bind == NULL) ||
		(winSock.closesocket == NULL) ||
		(winSock.connect == NULL) ||
		(winSock.ioctlsocket == NULL) ||
		(winSock.getsockopt == NULL) ||
		(winSock.htons == NULL) ||
		(winSock.inet_addr == NULL) ||
		(winSock.inet_ntoa == NULL) ||
		(winSock.listen == NULL) ||
		(winSock.ntohs == NULL) ||
		(winSock.recv == NULL) ||
		(winSock.select == NULL) ||
		(winSock.send == NULL) ||
		(winSock.setsockopt == NULL) ||
		(winSock.socket == NULL) ||
		(winSock.gethostbyname == NULL) ||
		(winSock.gethostbyaddr == NULL) ||
		(winSock.gethostname == NULL) ||
		(winSock.getpeername == NULL) ||
		(winSock.getservbyname == NULL) ||
		(winSock.getsockname == NULL) ||
		(winSock.WSAStartup == NULL) ||
		(winSock.WSACleanup == NULL) ||
		(winSock.WSAGetLastError == NULL) ||
		(winSock.WSAAsyncSelect == NULL)) {
	    goto unloadLibrary;
	}
	


	/*
	 * Initialize the winsock library and check the version number.
	 */
	if ((*winSock.WSAStartup)(MAKEWORD(2,2), &wsaData) != 0) {
	  fprintf(stderr,"unloading");
	  fflush(stderr);
	    goto unloadLibrary;
	}
#ifdef WSA_VERSION_REQD
	if (wsaData.wVersion != WSA_VERSION_REQD) {
	    (*winSock.WSACleanup)();
	    goto unloadLibrary;
	}
#endif
    }
    atexit(close_winsock);
    
    return;

    /*
     * Check for per-thread initialization.
     */
unloadLibrary:

    FreeLibrary(winSock.hInstance);
    winSock.hInstance = NULL;
    return;
}



/*
 *----------------------------------------------------------------------
 *
 * SocketsEnabled --
 *
 *	Check that the WinSock DLL is loaded and ready.
 *
 * Results:
 *	1 if it is.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */

    /* ARGSUSED */
static int
SocketsEnabled()
{
    int enabled;

    enabled = (winSock.hInstance != NULL);
    if (!enabled) {
      InitSockets();
       enabled = (winSock.hInstance != NULL);
    }
    return enabled;
}

static void close_winsock()
{
  if (winSock.hInstance != NULL)
    (*winSock.WSACleanup)();
}
 


/*
 *----------------------------------------------------------------------
 *
 * CreateSocketAddress --
 *
 *	This function initializes a sockaddr structure for a host and port.
 *
 * Results:
 *	1 if the host was valid, 0 if the host could not be converted to
 *	an IP address.
 *
 * Side effects:
 *	Fills in the *sockaddrPtr structure.
 *
 *----------------------------------------------------------------------
 */

static int
CreateSocketAddress(sockaddrPtr, host, port)
    struct sockaddr_in *sockaddrPtr;	/* Socket address */
    char *host;				/* Host.  NULL implies INADDR_ANY */
    int port;				/* Port number */
{
    struct hostent *hostent;		/* Host database entry */
    struct in_addr addr;		/* For 64/32 bit madness */

    /*
     * Check that WinSock is initialized; do not call it if not, to
     * prevent system crashes. This can happen at exit time if the exit
     * handler for WinSock ran before other exit handlers that want to
     * use sockets.
     */

    if (!SocketsEnabled()) {
        Tcl_SetErrno(EFAULT);
        return 0;
    }

    (void) memset((char *) sockaddrPtr, '\0', sizeof(struct sockaddr_in));
    sockaddrPtr->sin_family = AF_INET;
    sockaddrPtr->sin_port = (*winSock.htons)((short) (port & 0xFFFF));
    if (host == NULL) {
	addr.s_addr = INADDR_ANY;
    } else {
        addr.s_addr = (*winSock.inet_addr)(host);
        if (addr.s_addr == INADDR_NONE) {
            hostent = (*winSock.gethostbyname)(host);
            if (hostent != NULL) {
                memcpy((char *) &addr,
                        (char *) hostent->h_addr_list[0],
                        (size_t) hostent->h_length);
            } else {
#ifdef	EHOSTUNREACH
                Tcl_SetErrno(EHOSTUNREACH);
#else
#ifdef ENXIO
                Tcl_SetErrno(ENXIO);
#endif
#endif
		return 0;	/* Error. */
	    }
	}
    }

    /*
     * NOTE: On 64 bit machines the assignment below is rumored to not
     * do the right thing. Please report errors related to this if you
     * observe incorrect behavior on 64 bit machines such as DEC Alphas.
     * Should we modify this code to do an explicit memcpy?
     */

    sockaddrPtr->sin_addr.s_addr = addr.s_addr;
    return 1;	/* Success. */
}

#ifdef DEBUG
static void myerr(char *s,int d)
{
  if (0) {
  fprintf(stderr,s,d);
  fflush(stderr);
  }

}
#else
#define myerr(a,b)
#endif



/*
 *----------------------------------------------------------------------
 *
 * CreateSocket --
 *
 *	This function opens a new socket and initializes the
 * return -1 on failure, or else an fd 
 *
 *----------------------------------------------------------------------
 */
static int myerror;
int
CreateSocket(port, host, server, myaddr, myport, async)
    int port;			/* Port number to open. */
    char *host;			/* Name of host on which to open port. */
    int server;			/* 1 if socket should be a server socket,
				 * else 0 for a client socket. */
    char *myaddr;		/* Optional client-side address */
    int myport;			/* Optional client-side port */
    int async;			/* If nonzero, connect client socket
                                 * asynchronously. */
{
    u_long flag = 1;			/* Indicates nonblocking mode. */
    int asyncConnect = 0;		/* Will be 1 if async connect is
                                         * in progress. */
    struct sockaddr_in sockaddr;	/* Socket address */
    struct sockaddr_in mysockaddr;	/* Socket address for client */
    SOCKET sock = 0;

    /*
     * Check that WinSock is initialized; do not call it if not, to
     * prevent system crashes. This can happen at exit time if the exit
     * handler for WinSock ran before other exit handlers that want to
     * use sockets.
     */

    if (!SocketsEnabled()) {
      return -1;
    }

    if (! CreateSocketAddress(&sockaddr, host, port)) {
	goto error;
    }
    if ((myaddr != NULL || myport != 0) &&
	    ! CreateSocketAddress(&mysockaddr, myaddr, myport)) {
	goto error;
    }

    sock = (*winSock.socket)(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCKET) {
	goto error;
    }

    /*
     * Win-NT has a misfeature that sockets are inherited in child
     * processes by default.  Turn off the inherit bit.
     */

    SetHandleInformation( (HANDLE) sock, HANDLE_FLAG_INHERIT, 0 );
	
    /*
     * Set kernel space buffering
     */

    /*    TclSockMinimumBuffers(sock, TCP_BUFFER_SIZE); */

    if (server) {
	/*
	 * Bind to the specified port.  Note that we must not call setsockopt
	 * with SO_REUSEADDR because Microsoft allows addresses to be reused
	 * even if they are still in use.
         *
         * Bind should not be affected by the socket having already been
         * set into nonblocking mode. If there is trouble, this is one place
         * to look for bugs.
	 */
    
	if ((*winSock.bind)(sock, (struct sockaddr *) &sockaddr,
		sizeof(sockaddr)) == SOCKET_ERROR) {
            goto error;
        }

        /*
         * Set the maximum number of pending connect requests to the
         * max value allowed on each platform (Win32 and Win32s may be
         * different, and there may be differences between TCP/IP stacks).
         */
        
	if ((*winSock.listen)(sock, SOMAXCONN) == SOCKET_ERROR) {
	    goto error;
	}


    } else {

        /*
         * Try to bind to a local port, if specified.
         */
        
	if (myaddr != NULL || myport != 0) { 
	    if ((*winSock.bind)(sock, (struct sockaddr *) &mysockaddr,
		    sizeof(struct sockaddr)) == SOCKET_ERROR) {
		goto error;
	    }
	}            
    
	/*
	 * Set the socket into nonblocking mode if the connect should be
	 * done in the background.
	 */
    
	if (async) {
	    if ((*winSock.ioctlsocket)(sock, FIONBIO, &flag) == SOCKET_ERROR) {
		goto error;
	    }
	}

	/*
	 * Attempt to connect to the remote socket.
	 */

	if ((*winSock.connect)(sock, (struct sockaddr *) &sockaddr,
		sizeof(sockaddr)) == SOCKET_ERROR) {
	  	myerror = (*winSock.WSAGetLastError)();
        	if (myerror != WSAEWOULDBLOCK) {
		goto error;
	    }
	}

	    /*
	     * The connection is progressing in the background.
	     */

	    asyncConnect = 1;
        }



	/*
	 * Set up the select mask for read/write events.  If the connect
	 * attempt has not completed, include connect events.
	 */

    

    /*
     * Register for interest in events in the select mask.  Note that this
     * automatically places the socket into non-blocking mode.
     */

    (*winSock.ioctlsocket)(sock, FIONBIO, &flag);
    /*     SendMessage(tsdPtr->hwnd, SOCKET_SELECT,
	    (WPARAM) SELECT, (LPARAM) infoPtr);
    */

    return sock;

error:
    /* TclWinConvertWSAError((*winSock.WSAGetLastError)());
    if (interp != NULL) {
	Tcl_AppendResult(interp, "couldn't open socket: ",
		Tcl_PosixError(interp), (char *) NULL);
    }
    */
    if (sock != INVALID_SOCKET) {
	(*winSock.closesocket)(sock);
    }
    return -1;
}



/*
 *----------------------------------------------------------------------
 *
 * TcpOutputProc --
 *
 *	This procedure is called by the generic IO level to write data
 *	to a socket based channel.
 *
 * Results:
 *	The number of bytes written or -1 on failure.
 *
 * Side effects:
 *	Produces output on the socket.
 *
 *----------------------------------------------------------------------
 */

int
TcpOutputProc ( int fd, char *buf, int toWrite, int *errorCodePtr, int block )
{
    int bytesWritten;
    int error;
    int count=1000*30;

    *errorCodePtr = 0;

    /*
     * Check that WinSock is initialized; do not call it if not, to
     * prevent system crashes. This can happen at exit time if the exit
     * handler for WinSock ran before other exit handlers that want to
     * use sockets.
     */


    if (!SocketsEnabled()) {
        *errorCodePtr = EFAULT;
        return -1;
    }

    while (block) {

    AGAIN:
	/*
	 * In the blocking case, wait until the file becomes writable
	 * or closed and try again.
	 */
        {   fd_set writefds;
	int res;
	    struct timeval timeout;
	      FD_ZERO(&writefds);
	      FD_SET(fd,&writefds);
	      timeout.tv_sec = (block == 0 ?  0 : 60*60*24*30);
	      timeout.tv_usec = 0;
         if (!(res=(*winSock.select)(fd+1,NULL,&writefds,NULL,&timeout)) )
	    { bytesWritten = -1;

	    break;
	    }
	}


      
	bytesWritten = (*winSock.send)(fd, buf, toWrite, 0);
	if (bytesWritten != SOCKET_ERROR) {
	    /*
	     * Since Windows won't generate a new write event until we hit
	     * an overflow condition, we need to force the event loop to
	     * poll until the condition changes.
	     */
	    break;
	}
	
	/*
	 * Check for error condition or overflow.  In the event of overflow, we
	 * need to clear the FD_WRITE flag so we can detect the next writable
	 * event.  Note that Windows only sends a new writable event after a
	 * send fails with WSAEWOULDBLOCK.
	 */

	error = (*winSock.WSAGetLastError)();
	
	if (error == WSAEWOULDBLOCK) {
		*errorCodePtr = EWOULDBLOCK;
		CHECK_INTERRUPT;
		Sleep(30);
		bytesWritten = -1;
		if (--count < 0)
		  break;
		else goto AGAIN;
		
	} else {
	  /*	    TclWinConvertWSAError(error); */
	  
	    *errorCodePtr = EINVAL;
	    bytesWritten = -1;
	    break;
	}


    }
    return bytesWritten;
}




/*
  getCharGclSocket(strm,block) -- get one character from a socket
  stream.
  Results: a character or EOF if at end of file
  Side Effects:  The buffer may be filled, and the fill pointer
  of the buffer may be changed.
 */
int getCharGclSocket(strm,block)
  object strm;
  object block;
{
  object bufp = SOCKET_STREAM_BUFFER(strm);
  if (!SocketsEnabled()) {
      return -1;
  }
  if (bufp->ust.ust_fillp > 0) {
    dprintf("getchar returns (%c)\n",bufp->ust.ust_self[-1+(bufp->ust.ust_fillp)]);
    return bufp->ust.ust_self[--(bufp->ust.ust_fillp)];
  }
  else {
    fd_set readfds;
    struct timeval timeout;
    int fd = SOCKET_STREAM_FD(strm);
    if (1)
      { int high;
      AGAIN:      
      /* under cygwin a too large timout like (1<<30) does not work */
      timeout.tv_sec = (block != Ct ?  0 : 0);
      timeout.tv_usec = (block != Ct ?  0 : 10000);
      FD_ZERO(&readfds);
      FD_SET(fd,&readfds);
      high = (*winSock.select)(fd+1,&readfds,NULL,NULL,&timeout);
      if (high > 0)
	{ object bufp = SOCKET_STREAM_BUFFER(strm);
	int n;
	n = (*winSock.recv)(fd,bufp->ust.ust_self ,bufp->ust.ust_dim,0);
	doReverse(bufp->ust.ust_self,n);
	bufp->ust.ust_fillp=n;
	if (n > 0)
	  {
	    return bufp->ust.ust_self[--(bufp->ust.ust_fillp)];
	  }
	else
	  { return EOF;
	  FEerror("select said there was stuff there but there was not",0);
	  }
	}
      CHECK_INTERRUPT;
      /* probably a signal interrupted us.. */
      if (block == Ct)
	goto AGAIN;
      return EOF;
      }
  }
}

void tcpCloseSocket(SOCKET fd)
{

 (*winSock.closesocket)(fd);
 
}

void ungetCharGclSocket ( int c, object strm)
{  object bufp = SOCKET_STREAM_BUFFER(strm);
  if (c == EOF) return;
  dprintf("pushing back %c\n",c);
  if (bufp->ust.ust_fillp < bufp->ust.ust_dim) {
    bufp->ust.ust_self[(bufp->ust.ust_fillp)++]=c;
  } else {
    FEerror("Tried to unget too many chars",0);
  }
}

void doReverse ( char *s, int n )
{
    char *p=&s[n-1];
    int m = n/2;
    while (--m>=0) {
        int tem = *s;
        *s = *p;
        *p = tem;
        s++; p--;
    }
}


/*
void
sigint()
{
  install_default_signals();
  terminal_interrupt(1);
}
*/

#if 0
BOOL WINAPI inthandler(DWORD i)
{
  fprintf(stderr,"in handler %d",i);
      fflush(stderr); 
  terminal_interrupt(1);
  return TRUE;
}
#endif


void
alarm(int n) {
  return;
}


/* to do:  

 in the lisp:
start a shared named file based on the pid.
Then others will be able to send us messages, eg:interrupt!
and we will check this value in the CHECK_INTERRUPT 
places..

Then a little program like test4 or test3 can change
the memory.

*/

static struct {

  HANDLE handle;
  LPVOID address;
  DWORD length ;
  char name[20] ;
} sharedMemory = {0,0,0x10000} ;

void sigterm()
{
  exit(0);
}

#ifdef SIGABRT
void sigabrt()
{
  exit(SIGABRT);
}
#endif


void sigkill()
{
  exit(SIGKILL);
}



static void init_signals_pendingPtr()
{ static int where;
 if (sharedMemory.address) {
   signalsPendingPtr = sharedMemory.address;
 } else {
   signalsPendingPtr = &where;
 }
 gcl_signal(SIGKILL,sigkill);
 gcl_signal(SIGTERM,sigterm);
#ifdef SIGABRT
 gcl_signal(SIGABRT,sigabrt);
#endif 
 
 
 
}





void close_shared_memory()
{
  if (sharedMemory.handle)  CloseHandle(sharedMemory.handle);
  sharedMemory.handle = NULL;
  if (sharedMemory.address)  UnmapViewOfFile(sharedMemory.address);
  sharedMemory.address = NULL;
  init_signals_pendingPtr();
}

void init_shared_memory (void)
{ 
  sprintf(sharedMemory.name,"gcl-%d",getpid());
  sharedMemory.handle =
    CreateFileMapping((HANDLE)-1, NULL, PAGE_READWRITE, 0, sharedMemory.length , TEXT (sharedMemory.name));
  if (sharedMemory.handle == NULL)
    error("CreateFileMapping failed");
   sharedMemory.address =
     MapViewOfFile(sharedMemory.handle, /* Handle to mapping object.  */
		   FILE_MAP_WRITE,               /* Read/write permission */
		   0,                                 /* Max.  object size.  */
		   0,                                 /* Size of hFile.  */
		   0);                                /* Map entire file.  */
   if (sharedMemory.address == NULL)
     { error("MapViewOfFile failed");}
   init_signals_pendingPtr();
   atexit(close_shared_memory);
}

/* The only signal REALLY handled somewhat under mingw is the
   SIGINT, and we need to make the following allow blocking of this.
   by for example taking the signal and then recording we got it,
   but delivering it later in the unblock code time ... ie in the
*/

static sigset_t _current_set=0;
void
sigemptyset( sigset_t *set)
{
  *set = 0;
}
void
sigaddset( sigset_t *set, int n)
{
  *set |= (1 << n);
}

int
sigismember ( sigset_t *set, int n)
{
  return ((*set & (1 << n)) != 0);

}

int
sigprocmask (int how , const sigset_t *set,sigset_t *oldset)

{
  if (oldset) *oldset = _current_set;
  if (set) {
    switch (how)
      {
    case SIG_BLOCK:
      _current_set |= *set;
      break;
    case SIG_UNBLOCK:
      _current_set &= ~(*set);
      break;
    case SIG_SETMASK:
      _current_set = *set;
      break;
    }
    
  }
  return 0;
}
  
void
fix_filename(object pathname, char *filename1)
{
    char current_directory[MAXPATHLEN];
    char directory[MAXPATHLEN];
    char *filename = filename1;
    char *p;
    extern char *getwd();
    /*    fprintf ( stderr, "fix_filename: At start %s\n", filename1 );*/
    p = filename;
    while ( *p ) {
        if (*p=='\\') *p='/';
        p++;
    }
    /* grok filename to have only '/' not '\',
       fix up for cygnus:  /cygdrive/h/   becomes h:/
       //h/ab and /h/ab become h:/ab
       and
       change h:a/b to check what the current directory
       is on 'h:' and then prepend this to a/b
       */  

    if ( filename[0] == '/' &&
         filename[1] == 'c' &&
         strncmp ( filename, "/cygdrive/", 10 ) == 0 &&
         filename[11] == '/' ) {
        /* /cygdrive/... */
        /*        fprintf ( stderr, "fix_filename: In cygdrive phase\n" );*/
        filename[9]  = filename[10];
        filename[10] = ':';
        filename    += 9;
    } else {
        if ( filename[0]=='/' &&
             filename[1]=='/' &&
             filename[3]=='/' ) {
            /* //h/... */
            /*            fprintf ( stderr, "fix_filename: In // phase\n" );*/
            filename[1] = filename[2];
            filename[2] = ':';
            filename   += 1;
        } else {
            if ( filename[0] == '/' &&
                 filename[2] == '/' &&
                 isalpha ( filename[1] ) ) {
                /* /h/... */
                /*                fprintf ( stderr, "fix_filename: In / phase\n" );*/
                filename[0] = filename[1];
                filename[1] = ':';
            }
        }
    }

    /* If the drive is just a letter with a colon eg "c:" or "c:hello.txt" it needs to
     * be resolved to the current directory on that device */
    if ( ( filename[1] == ':' ) && (( strlen ( filename ) == 2 ) || ( filename[2] != '/' ) ) ) {
        char buf[4];
        int len;
        /*        fprintf ( stderr, "fix_filename: In current dir fixup phase\n" );*/
        bcopy(filename,buf,2);
        buf[2]='/';
        buf[3]=0;
        getwd(current_directory);
        len = strlen ( current_directory );
        strcpy ( directory, filename );
        strncpy ( filename, current_directory, MAXPATHLEN-1 );
        filename[len]='/';
        filename[len+1]='\0';
        strncat ( filename, directory+2, MAXPATHLEN - 2 - strlen ( current_directory ) );
        filename [MAXPATHLEN-1] = '\0';
        filename = filename1;
        p = filename;
        while ( *p ) {
            if (*p=='\\') *p='/';
            p++;
        }
    }

    /* move the name back to beginning of buffer */
    if ( filename > filename1 ) {
        while ( *filename ) {
	    *filename1++ = *filename++;
        }
        *filename1=0;
    }
    /*    fprintf ( stderr, "fix_filename: At end %s\n", filename1 );*/

}



