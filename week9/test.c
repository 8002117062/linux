#include<stdlib.h>
#include<stdio.h>
static void __attribute__ ((constructor)) before_main(void){
    printf("Running before main!!\n");
}
int main(){
    printf("Main\n");
    return 0;
}
