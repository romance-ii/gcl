#ifndef _H_SOCKS
#define _H_SOCKS

#include "obj.h"

obj sock_open_named_socket( obj name, bool async );
void sock_close_named_socket( obj named_socket );

obj sock_connect_to_name( obj host_id, obj name, bool async );
obj sock_accept_connection( obj named_socket, bool async );

obj sock_hostname_to_hostid( obj hostname, obj *aliases );
obj sock_hostid_to_hostname( obj hostid, obj *aliases );
bool sock_hostid_eq( obj hostid1, obj hostid2 );

/* items is a list of objects returned from
   sock_open_named_socket, sock_connect_to_name,
   or sock_accept_connection with async = YES
*/

obj sock_collect_data( obj items );

void sock_write( obj connection, const char *text, UINT_32 length );

/* sock_read should return 0 on EOF */

UINT_32 sock_read( obj connection, char *buffer, UINT_32 max_len );
void sock_close_connection( obj connection );

#endif /* _H_SOCKS */

