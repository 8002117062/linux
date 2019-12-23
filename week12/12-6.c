#include "my.h"
#define BUF_4K 4*1024
#define BUF_8K 8*1024
#define BUF_12K 12*1024

int mian(void)
{
	char a[BUF_4K];
	char b[BUF_8K];
	char c[BUF_12K];

	memset(a,"A",sizeof(a));
	memset(b,"B",sizeof(b));
	memset(c,"c",sizeof(c));
	int fd[2];
	int ret= pipe(fd);
	if(ret==-1)
	{
		fprintf(stderr,"create pipe error(%s)\n",strerror(errno));
		exit(-1);
	}
	pid_t pid;
	pid=fork();
	if(pid==-1)
	{
		fprintf(stderr,"first fork error(%s)\n",strerror(errno));
		exit(-2);
	}
	else if(pid==0)
	{
		close(fd[0]);
		int loop=0;
		while(loop++<10)
		{
			ret=write(fd[1],b,sizeof(b));
			printf("[child] pid=% write %d bytes to pipe.\n",getpid(),ret);
		
		}
		exit(0);
	}
	pid=fork();
	if(pid==-1)
	{
		fprintf(stderr,"third fork error(%s)\n",strerror(errno));
		exit(-4);
	}
	else if(pid==0)
	{
		close(fd[0]);
		int loop=0;
		while(loop++<10)
		{
			ret=write(fd[1],c,sizeof(c));
			printf("[child] pid=% write %d bytes to pipe.\n",getpid(),ret);
		}
		exit(0);
	}
	close(fd[1]);
	sleep(2);
	int fd1 = open("./test.txt",O_WRONLY|O_CREAT|O_TRUNC,0644);
	char buf[1024*4]={0};
	int n=1;
	while(1)
	{
		
	}
}





















