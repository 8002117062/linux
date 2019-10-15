#include "maxmain.h"

void getdata(int a[],int n)
{
	int j;	

	srand((int)time(0));
	for(j=0;j<n;j++)
	{
		a[j]=1+(int)(100.0*rand()/(RAND_MAX+1.0));
	}
}
