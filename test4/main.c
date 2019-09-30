#include "main.h"
#define NUMS 1000

int main(void)
{
	int data1[NUMS],data2[NUMS];
    int j;
	srand((int)time(0));
	for(j=0;j<NUMS;j++)
	{
		data1[j]=1+(int)(1000.0*rand()/(RAND_MAX+1.0));
		data2[j]=data1[j];
	}
	int num = NUMS;
	long int time1,time2;
	
	time1 = get_time(theqsort,data1,num);
    time2 = get_time(themysort,data2,num);
	printf("qsort_time: %ld\nmysort_time: %ld\n",time1,time2);

	return 0;
}
