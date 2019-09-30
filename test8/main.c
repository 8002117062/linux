#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main()
{
	int fd;
	char buf1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *buf = "helloWorld";
	int flags =O_CREAT | O_TRUNC | O_WRONLY;
	char buf2[5];

	if((fd = open("test.dat",flags,0644)) < 0)
		perror("opoen file error.");
	if(write(fd,buf1,sizeof(buf1))!=sizeof(buf1))
		perror("buf1 write into fd error!");
	if(lseek(fd,5,SEEK_SET) < 0)
		perror("lseek error!");
	if(read(fd,buf2,(sizeof(buf2))) != (sizeof(buf2)))
		//perror("read error!");
	if(lseek(fd,10,SEEK_SET)<0)
		perror("lseek error!");
	if(write(fd,buf,strlen(buf)) != strlen(buf))
		perror("write error!");

	return 0;
}
