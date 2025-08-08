#target : dependencies
#<tab>commands to generate target

object.o : main.c sum.c diff.c pdt.c div.c
	gcc *.c -c

all.exe : main.o sum.o diff.o pdt.o div.o
	gcc *.o -o all.exe

run : all.exe
	./all.exe

clean :
	rm -rf *.o all.exe