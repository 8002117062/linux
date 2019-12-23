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

struct sendval{
	int n;
	int s;
};
#define NUM 4
