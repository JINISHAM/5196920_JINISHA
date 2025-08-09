#target : dependencies
#<tab>commands to generate target

object.o : main.c sum.c diff.c pdt.c div.c test_sum.c test_diff.c test_pdt.c test_div.c unity.c cal.h cal_test.h
	gcc *.c -c

all.exe : main.o sum.o diff.o pdt.o div.o unity.o test_sum.o test_diff.o test_pdt.o test_div.o
	gcc *.o -o all.exe

run : all.exe
	./all.exe

clean :
	rm -rf *.o all.exe