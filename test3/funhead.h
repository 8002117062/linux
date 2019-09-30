#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

long int get_qsort_time(int a[]);
long int get_my_time(int b[]);
int compar(const void *a,const void *b);
