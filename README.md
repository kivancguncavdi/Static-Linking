# Static-Linking

For compiling:

First, 
gcc -I . -c mainFile.c

Then,
gcc -c sortFunc.c

Finally,
gcc -o prj sortFunc.o mainFile.o

Then you can run the program by the following command:
./prj
