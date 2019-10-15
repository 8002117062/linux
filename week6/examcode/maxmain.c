#include "maxmain.h"

int main(void)
{
	int data[100];
	int i,result;
	getdata(data,100);
	for(i = 0;i < 100;i++)
	{
		printf("data[%d]:%d\n",i, data[i]);
	}
	result = getmax(data,100);
	printf("the max of the array is:%d\n",result);
	return 0;
}
