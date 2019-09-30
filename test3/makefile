newtest3:main.o fun.o
	gcc main.o fun.o -o newtest3
main.o:main.c funhead.h
	gcc main.c -c
fun.o:fun.c
	gcc fun.c -c
clean:
	rm -f *.o 
