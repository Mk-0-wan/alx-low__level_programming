### Static Library
***

A Collections of cod routines(functions, classes and variables) that can be called upon building of a program.
In simple terms it allows programmers to reuse a code block from somewhere else.
***
##### Why do i need it
1.Fast during compilations of huge programs.
2.Reliable since it allows us to reuse code blocks.

* Those are just but few i could find useful at my level of using static library with c.
* Static libraries store the copy of the object c code in an archive file.
* All the object files inside the static library can be index using this command 
```ar -s [or] randlib libname.a
```
* This is for faster symbolic lookup during run-time of the program. We all no fast is good since of a reliable program.
***
### Creating a Static Library

* There are few steps one needs to follow in order to achieve the result.
    1.Create all the required object files.
        ```gcc -c *.c
        ```
    2.Create an archive inside the same directory.
        ```ar -rcs libname.a *.o
        ```
        I have added the `-s` options which saves us the hassle of using the `randlib libname.a` command again.
    3.Move the static library to the directory where your main.c file is.
    4.Compiling the program using the static library. Use these command.
        ```gcc main.c main.h -L. -lname -o main
        ```
    5.You are now all done. Run the executable file and the program should run and output the correct output as expected.
* A simple explanation on how to use the static library with c.
***
AUTHOR: [Mk-0-wan](https://github.com/Mk-0-wan)
