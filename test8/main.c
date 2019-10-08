#include <fcntl.h>
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include<string.h>
 

int main(void)

{

 

        int fd;

        char buf1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
 		 char *buf ="helloworld";
		char buf2[5];
       

        if ((fd = open("test2.txt",O_RDWR|O_CREAT,0644)) < 0)

                printf("open error! \n");
		if(write(fd,buf1,sizeof(buf1))!=sizeof(buf1))
		perror("buf1 write into fd1 error");


        if (lseek(fd,5,SEEK_SET) < 0) 
 
                printf("lseek error! \n");

        if  (read(fd,buf2,(sizeof(buf2))) != (sizeof(buf2)))   

                printf("read error! \n");

        else
				buf2[5] = '\0';
                printf("read:%s\n",buf2);
	if (lseek(fd,10,SEEK_SET) < 0) 
 
                printf("lseek error! \n");	
       if (write(fd,buf,strlen(buf)) != strlen(buf))    

              printf("write error! \n");

}
