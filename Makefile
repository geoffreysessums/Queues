# Makefile for programs
#******************************************************************************

PROGRAMS = queuearray

#******************************************************************************
# Parameters to control Makefile operation

CC = gcc
CFLAGS =

#******************************************************************************
# Entry to bring the package up to date

all: $(PROGRAMS)

#******************************************************************************
# Standard entries to remove files from the directories
# 	tidy -- eliminate unwanted files
#	scratch -- delete derived files in preparation for rebuild

tidy:
	rm -f ,* .,* *~ core a.out graphics.ps
		
scratch:
	rm -f *.o *.a $(PROGRAMS)

#******************************************************************************
# C compilations

queuearray.o: queuearray.c
	$(CC) $(CFLAGS) -c queuearray.c
	
#******************************************************************************
# Executable programs

queuearray: queuearray.o
	$(CC) $(CFLAGS) -o queuearray queuearray.o