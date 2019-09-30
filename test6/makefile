newtest6:main.o filetime.o readwrite.o
	gcc main.o filetime.o readwrite.o -o newtest6
main.o:main.c main.h
	gcc main.c -c
filetime.o:filetime.c
	gcc filetime.c -c
readwrite.o:readwrite.c
	gcc readwrite.c -c
clean:
	rm -f *.o 
