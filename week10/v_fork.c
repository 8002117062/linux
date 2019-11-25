#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int g = 88;
int main()
{
	int v = 99;
	pid_t pid;
	pid = vfork();
	if(pid < 0)
	{
		perror("vfork failed!\n");
		exit(-1);
	}
	else if(pid == 0)
	{
		g++;
		v++;
		printf("child:pid=%d,g=%d,v=%d",getpid(),g,v);
		_exit(0)
	}
	else
	{
		printf("return value = %d\n",pid);
	}
	printf("parent:pid=%d,g=%d,v=%d",getpid(),g,v);
	_exit(0);
}
