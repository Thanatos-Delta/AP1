# Dateiname: stringName.mak


stringName:	myfunctions.o stringName.o
				cc -o stringName myfunctions.o stringName.o


myfunctions.o:	myfunctions.h stringName.c
				cc -c myfunctions.c


stringName.o:	myfunctions.h stringName.c
				cc -c stringName.c