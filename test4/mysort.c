#include "main.h"

void themysort(int b[],int num)
{
	int i,j,temp;
	for(i=0;i<num;i++)
	{
		for(j=1;j<num-i;j++)
		{
			if(b[j-1]>b[j])
			{
				temp = b[j-1];
				b[j-1] = b[j];
				b[j] = temp;
			}
		}
	}
}

void theqsort(int a[],int num)
{
	qsort(a,num,sizeof(int),compar);
}

int compar(const void *a,const void *b)
{
	int *aa=(int * ) a,*bb=(int * )b;
	if(* aa > * bb) return 1;
	if(* aa == * bb) return 0;
	if(* aa < * bb) return -1;
}
