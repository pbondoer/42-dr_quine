#include<stdio.h>
#include<fcntl.h>
#define M int main()
#define NAME "Grace_kid.c"
#define Q(x)char*s=#x;x
Q(M{int fd=open(NAME,O_WRONLY|O_CREAT|O_TRUNC,0644);if(fd==-1)return 1;dprintf(fd,"#include<stdio.h>\n#include<fcntl.h>\n#define M int main()\n#define NAME \"Grace_kid.c\"\n#define Q(x)char*s=#x;x\nQ(%s)//quine\n",s);})//quine
