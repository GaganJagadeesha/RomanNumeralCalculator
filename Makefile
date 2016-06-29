#Makefile for roman numeral calculator
C=gcc

CFLAGS=-c -Wall 
 
all: romancaltests
	
romancaltests: romancal.o Roman.h romancaltests.o
	$(C) -g romancaltests.o romancal.o Roman.h -o romancaltests 

romancaltests.o: romancaltests.c
	$(C) $(CFLAGS) romancaltests.c

romancal.o: romancal.c
	$(C) $(CFLAGS) romancal.c

clean:
	rm -rf *o romancaltests
