CC=gcc
CFLAGS=-I.

prj: sortFunc.o mainFile.o
	$(CC) -o prj sortFunc.o mainFile.o
