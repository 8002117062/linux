#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

typedef void(*Pfun)(int a[],int b);

void theqsort(int a[],int num);
void themysort(int b[],int num);
int compar(const void *a,const void *b);
long int get_time(Pfun p,int a[],int b);
