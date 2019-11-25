#include "my.h"

int main()
{
	pid_t child1,child2;
	int i;
	child1=fork();
	if(child1>0)
		exit(0);
	else if(child1<0)
	{
		perror(create child1 wrong!);
		exit(1);
	}
	child2=fork();
	if(child2>0)
		exit(0);
	else if(child2<0)
	{
		perror(create child2 wrong!);
		exit(1);
	}
}
