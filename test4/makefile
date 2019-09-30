newtest4:main.o gettime.o mysort.o
	gcc main.o gettime.o mysort.o -o newtest4
main.o:main.c main.h
	gcc main.c -c
gettime.o:gettime.c
	gcc gettime.c -c
mysort.o:mysort.c
	gcc mysort.c -c
clean:
	rm -f *.o 
