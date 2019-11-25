#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>

int main()
{
    int pid;
    if((pid =fork())<0)
    {
        perror("faile to fork@\n");
        return -1;
    }else if(pid ==0){  //瀛?        printf("%d : child is exit now!\n",getpid());
        exit(0);
    }else{
        printf("%d : parent is running@\n",getpid());
        while(1);
    }
    exit(0);
}
