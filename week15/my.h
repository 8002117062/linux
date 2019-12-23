#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "signal.h"
#include "sys/types.h"
#include "wait.h"
#include "errno.h"
#include "string.h"
#include "time.h"
#include "sys/times.h"
#include "pthread.h"
#include <limits.h>
#include <semaphore.h> 

struct sendval{
	int n;
	int s;
};
#define NUM 4
#define NT 100
#define LOOP 1000000
#define WRITER_FIRST
