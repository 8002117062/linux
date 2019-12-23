#include "my.h"
#define NUM 4

void * fun(void *arg)
{
	int *sum=(int *)malloc(sizeof(int));
	int *pt;
	pt = (int*)arg;
	int j=((int)pt+1)*100,k=0;
	for(k=0;k<=j;k++)
	{
		*sum+=k;
	}
	//printf("%d thread : tid %p,sum=%d\n\n",pt,pthread_self(),sum);

	//int *i=(int *)malloc(sizeof(int));
	//printf("tid = %p\n",(unsigned int)pthread_self());
	//*i=99;
	//printf("i=%d,&i=%d\n",i,*i);
	pthread_exit((void*)sum);
}

int main()
{
	pthread_t tid[NUM];
	int ret[NUM],**rv;
	int i=0;
	for(i=0;i<NUM;i++)
	{
		ret[i]=pthread_create(&tid[i],NULL,fun,(void *)i);
		if(ret[i]!=0)
		{
			perror("failed\n");
			return -1;
		}
		pthread_join(tid[i],(void**)&rv);
		printf("sum=%d\n",*rv);
	}
	return 0;
}
