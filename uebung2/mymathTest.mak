# Dateiname: mymathTest.mak

mymathTest:	mymath.o main.o
		gcc -o mymathTest mymath.o main.o

mymath.o: mymath.c mymath.h 
		gcc -c mymath.c


main.o: main.c mymath.h
		gcc -c main.c 