#define DUM(a) int a(int n) { printf("dummy " #a " call %d\n",n); return 0;}
DUM(profil)
/* DUM(alarm) */
DUM(getpid)
DUM(getuid)
DUM(popen)
DUM(pclose)
DUM(getpwuid)
DUM(getpwnam)
