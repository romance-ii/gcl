dnl This file is used for ParGCL development, only -- not for making ParGCL
dnl Process this file with autoconf to produce a configure script.

AC_INIT(src/mpi_defglue.lsp)

dnl Set version number
PARGCL_VERSION=0.9.7
PARGCL_UPDATED="November, 2005"

# Checks for programs.
AC_PROG_CC
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB

dnl Mostly for Solaris:
dnl  libxnet is a small subset.  If functions still missing, add other libs.
dnl  Note that last libraries added to $LIBS appears as first one.
AC_CHECK_FUNC(connect, , AC_CHECK_LIB(xnet, connect))
AC_CHECK_FUNC(socket, , AC_CHECK_LIB(socket, socket))
AC_CHECK_FUNC(gethostbyname, , AC_CHECK_LIB(nsl, gethostbyname))
LIBSFORSOCKETS="$LIBS"
dnl AC_CHECK_LIB(efence, malloc, LIBEFENCE=-lefence, LIBEFENCE= )
LIBS=

AC_CHECK_FUNC([nanosleep], , AC_CHECK_LIB([rt], [nanosleep]))
LIBSFORSLEEP="$LIBS"
LIBS=

AC_CHECK_LIB([pthread], [pthread_create])
LIBSFORPTHREAD="$LIBS"
LIBS=

AC_CHECK_LIB([posix4], [sem_init])
LIBSFORPTHREAD="$LIBSFORPTHREAD $LIBS"

dnl LIBS="$LIBSFORSOCKETS $LIBSFORPTHREAD"

dnl AC_ARG_ENABLE(strip-libs,
dnl          [  --enable-strip-libs     Smaller image, but no symbolic debugging [default=no]],
dnl          , enable_strip_libs=no)

dnl if test "x$enable_strip_libs" = "xyes"; then
dnl   STRIP_LIBS=yes
dnl   STRIP=strip
dnl else
dnl   STRIP=:
dnl fi

dnl AC_ARG_WITH(mpi-cc,
dnl [  --with-mpi-cc=PROG      Use PROG to compile mpi files [default=built-in MPI]
dnl                           (Also consider: env CC=cc ./configure (use vendor cc);
dnl                            see appendix of manual for more on non-default MPI)],
dnl , with_mpi_cc=no)

AC_ARG_WITH(gcl,
[  --with-gcl=PATH         defines location of gcl],
, with_gcl=no)
with_gcl=`echo $with_gcl | sed -e "s#^../#$PWD/../#"`

AC_ARG_WITH(gcl-build-dir,
[  --with-gcl-build-dir=PATH not needed unless GCL not yet built],
, with_gcl_build_dir=no)

AC_ARG_WITH(mpicc,
[  --with-mpicc=PATH       if don't want built-in MPI, define path to mpicc],
, with_mpicc=no)
with_mpicc=`echo $with_mpicc | sed -e "s#^../#$PWD/../#"`

if test "x$with_mpicc" = "xno"; then
  libmpi="-lmpinu"
  MPICC='$'{CC}
else
  HAVE_MPI_H=1
  AC_DEFINE(HAVE_MPI_H)
  MPICC="$with_mpicc"
fi

LIBSFORMPI="$libmpi $LIBSFORSOCKETS"
dnl topc-config.in:  --mpi)
dnl  Note that with_mpi_cc != no means libmpi="".
dnl  This is the right thing if using ${MPICC}
dnl  Maybe we should have undocumented --mpi-internal returning this,
dnl    which is called from topcc.in and topc++.in,
dnl    while --mpi  should indicate problem and:  exit 1
dnl # Do all of this for MPICXX also

dnl Checks for header files.
AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_CHECK_HEADERS([fcntl.h netdb.h netinet/in.h stdlib.h string.h sys/socket.h sys/time.h unistd.h])
AC_CHECK_HEADERS([pthread.h semaphore.h])

dnl Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_HEADER_TIME
AC_C_VOLATILE

dnl Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_FUNC_SELECT_ARGTYPES
AC_TYPE_SIGNAL
AC_FUNC_STAT
AC_FUNC_VPRINTF
AC_CHECK_FUNCS([alarm getcwd gethostbyname gethostname gettimeofday memset select socket strchr strerror])

dnl Erase old @DEFS@ and add to it
rm -rf conftest* confdefs.h
# AIX cpp loses on an empty file, so make sure it contains at least a newline.
echo > confdefs.h

dnl AIX-cc doesn't allow "// ..." style commenting by default.
dnl AIX-xlc is IBM ANSI C, while cc is IBM extended C and xlC is C++/C
dnl OSF1: libpthread in weird place, not found by this script
dnl In linuxthreads-2.0.6 and also in some later versions using "old semaphore",
dnl   make parfactor-pthread occasionally fails.
dnl   Enable ASSERT in linuxthreads:queue.h for the 'smoking gun'
dnl We disable all of linuxthreads semaphores until we can test linuxthreads-0.7
target=`uname -s`
case $target-$CC in
  IRIX64-*) AC_DEFINE(HAVE_PROCESS_SCOPE_BOUND_NP) ;;
  AIX-xlc) CFLAGS="$CFLAGS -qcpluscmt" ;;
  AIX-xlC) CFLAGS="$CFLAGS -qcpluscmt" ;;
  AIX-cc) CFLAGS="$CFLAGS -qcpluscmt" ;;
esac

dnl GCL_SRC=`gcl -batch -eval \
dnl   '(write (concatenate (quote string) (car *load-path*) "..") :escape nil)'`
if test "x$with_gcl" = "xno"; then
  with_gcl=`which gcl`
fi

dnl libdir=`$with_gcl -batch -eval '(progn (format t *lib-directory*) (quit))'`
dnl # Check if we have correct lib directory
dnl if test ! -d $libdir/h; then
dnl   AC_MSG_ERROR(Didn't find include directory at $libdir/h
dnl     Bad parameter given to ./configure --with-gcl= );
dnl fi

GCL=$with_gcl
if test "$with_gcl_build_dir" = "no"; then
  GCL_SRC=`$with_gcl -batch \
                     -eval '(progn (write *lib-directory* :escape nil) (quit))'`
  GCL_SRC=`echo $GCL_SRC | sed -e s'#"##g'`
else
  GCL_SRC=$with_gcl_build_dir
fi

# If user specifies with_gcl__build_dir, then with_gcl does not yet exist.
if test ! -x "$with_gcl" -a "x$with_gcl_build_dir" = "xno"; then
  AC_MSG_ERROR(Couldn't find gcl command
    Use ./configure --with-gcl= to specify location of gcl command );
fi

dnl Substitute shell variables
AC_SUBST(PARGCL_VERSION)
AC_SUBST(PARGCL_UPDATED)
AC_SUBST(GCL)
AC_SUBST(GCL_SRC)
AC_SUBST(PWD)
AC_SUBST(HOSTNAME)
AC_SUBST(LIBSFORSOCKETS)
AC_SUBST(LIBSFORSLEEP)
AC_SUBST(LIBSFORPTHREAD)
AC_SUBST(LIBSFORMPI)
AC_SUBST(CFLAGS_FOR_POSIX_1C)
AC_SUBST(HAVE_PTHREAD)
AC_SUBST(LIBEFENCE)
AC_SUBST(STRIP_LIBS)
AC_SUBST(STRIP)
AC_SUBST(MPICC)
AC_SUBST(MPICXX)

AC_CONFIG_FILES([src/Makefile
		 src/mpinu/Makefile src/mpinu/procgroup
		 bin/procgroup bin/mpinucc Makefile])
AC_OUTPUT
chmod a+x bin/mpinucc

dnl --enable-batch not currently among our configure options
if test "x$enable_batch" != xyes; then
    echo ""
    echo "Now please type \`${TB}make${TN}' to compile. Good luck."
    echo ""
else
    make
fi
