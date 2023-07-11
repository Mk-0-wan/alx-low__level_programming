Working with static files
libraries importance
able to shrink multiple object files into a folder which is able to act as asingle entity during linking phase of a program
means faster compilation process and less memory occupation
all the files are contained in a folder which is archived which contains all the object files necessary during compilation
and linking phase and again they are not necessary used during runtime.
now there are things we need to set first in order to make all the static library to work for us perfectly
we need to make all the outsidefunction(or as i like to callthem helper function) to work with the main file will need to
store them into a folder which is archieved
inside the folder will contain only the object files of the above mentioned functions
command used for making a complete static files
ar -rc -libname.a file.o file2.o file3.o file4.0
creates a archeived folder containing all the necessary object files which will be necessary during linking phase
command used during compilation
gcc main.c -L. -lname -o main
first argument is the name of the main.c file this is tomake the compiler now which symbols to resolve during liking phase and compilation
-L. telling the compiler look for a custom library in the current folder
-lname indicates the name of the custom library
-o as usual the output followed then name of the output file
