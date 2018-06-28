# Static-Linking

For compiling:

First, 
gcc -I . -c mainFunc.c

Then,
gcc -c sortFunc.c

Finally,
gcc -o prj sortFunc.o mainFunc.o

Then you can run the program by the following command:
./prj
