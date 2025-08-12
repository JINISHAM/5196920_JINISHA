object.o : dev.c test.c unity.c
	gcc *.c -c

all.exe : dev.o test.o unity.o
	gcc *.o -o all.exe

run : all.exe
	./all.exe

clean : 
	rm -rf *.o all.exe