#include "my.h"

int main()
{
	pid_t r;
	int r_num;
	int pipefd[2];
	char buf[1];
	memset(buf,0,sizeof(buf));
	int i=0;
	if(pipe(pipefd)<0)
	{
		perror("pipe failed\n");
		return -1;
	}
	r=fork();
	if(r<0)
	{
		perror("fork failed\n");
		return -1;
	}
	else if(r==0)
	{
		//1
		//close(pipefd[1]);
		//if((r_num=read(pipefd[0],buf,100))>0)
		//	printf("child read from pipe: %s,total=%d\n",buf,r_num);
		//close(pipefd[0]);
		//exit(0);

		//2
		close(pipefd[0]);
		for(i=0;i<65536;i++)
		{
			write(pipefd[1],"1",1);
		}
		close(pipefd[1]);
		exit(99);
	}
	else
	{
		//1
		//close(pipefd[0]);
		//if(write(pipefd[1],"1234567890",10)!=-1)
		//	printf("parent write ik\n");
		//close(pipefd[1]);
		//
		//return 0;

		//2
		close(pipefd[1]);
		wait(1);
		for(i=0;i<65536;i++)
		{
			read(pipefd[0],buf,1);
			printf("%d:%s\n",i,buf);
		}
		close(pipefd[0]);
		return 0;
	}
}

