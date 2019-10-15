#include "/home/rlk/gittest/examcode/maxmain.h"
#include <stdlib.h>
#include <dlfcn.h>

int main()
{
	void * handle;
	int(*f1)();
	int(*f2)();
	int(*f3)();
	char *error;
	handle = dlopen("/home/rlk/gittest/examcode/libdynamiclib.so",RTLD_LAZY);

	if(!handle)
	{
		perror("load failed!\n");
		exit(1);
	}
	f1 = dlsym(handle,"getdata");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}
	f2 = dlsym(handle,"getmax");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}

	int data[100];
	int i,result;
	f1(data,100);
	for(i = 0;i < 100;i++)
	{
		printf("data[%d]:%d\n",i, data[i]);
	}
	result = f2(data,100);
	printf("the max of the array is:%d\n",result);
	return 0;
}
