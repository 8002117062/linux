#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<sys/types.h>
int main(){
    int ret;
    printf("caller1:pid=%d,ppid=%d\n",getpid(),getppid());
    ret = system("/home/rlk/test1");   //system可以派生一个新的子进程让其执行下去
    printf("after calling");
    sleep(100);
    return 0;
}
