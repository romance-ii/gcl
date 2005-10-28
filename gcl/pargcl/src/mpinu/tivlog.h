// Original version of code by Eric Robinson.

#include <string.h>
#include <sys/time.h>
#include <stdarg.h>

#ifndef DEBUG_LEVEL
   #define DEBUG_LEVEL 0
#endif

// Can't be static; We want output as single shared stream across files.
// init_log will initialize it.
FILE *MPINU_output;

static bool init_log( char *filename )
{
   if( !filename ) MPINU_output = stdout;
   else assert( MPINU_output = fopen( filename, "w" ) );
   return true;
}

static void finalize_log( )
{
   fclose( MPINU_output );
}

static void log_string( UINT32 level, char *message,... )
{
   if( level <= DEBUG_LEVEL )
   {
      char buf[1000];
      va_list vl_vars;
      struct timeval s_time;
   
      if ( ! MPINU_output )
        return;
      va_start( vl_vars, message );
      gettimeofday( &s_time, NULL );
      sprintf( buf, "%s", ctime( &( s_time.tv_sec ) ) );
      buf[strlen( buf ) - 1] = '\0';
      strcat( buf, ": " );
      strcat( buf, message );
      vfprintf( MPINU_output, buf, vl_vars );
      fflush( MPINU_output );
   }
}
