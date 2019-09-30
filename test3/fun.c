#include "funhead.h"


int compar(const void *a,const void *b)
{
	int *aa=(int * ) a,*bb=(int * )b;
	if(* aa > * bb) return 1;
	if(* aa == * bb) return 0;
	if(* aa < * bb) return -1;
}

long int get_qsort_time(int a[])
{
	struct timeval tv1,tv2;
	struct timezone tz;
	gettimeofday(&tv1,&tz);
	qsort(a,10000,sizeof(int),compar);
	gettimeofday(&tv2,&tz);
	//printf("the_qsort_time: %d\n",tv2.tv_usec-tv1.tv_usec);
	return tv2.tv_usec-tv1.tv_usec;
}

long int get_my_time(int b[])
{
	struct timeval tv1,tv2;
	struct timezone tz;
	gettimeofday(&tv1,&tz);

	int i,j,temp;
	for(i=0;i<10000;i++)
	{
		for(j=1;j<10000-i;j++)
		{
			if(b[j-1]>b[j])
			{
				temp = b[j-1];
				b[j-1] = b[j];
				b[j] = temp;
			}
		}
	}
	
	gettimeofday(&tv2,&tz);
	//printf("the_my_time: %d\n",tv2.tv_usec-tv1.tv_usec);
	return tv2.tv_usec-tv1.tv_usec;
}





