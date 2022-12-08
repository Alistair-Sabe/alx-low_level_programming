Description Of The Project

task0: runs a C file through the preprocessor and save the result into another file
code: gcc -E $CFILE -o c 
-E -> preprocessor
-o -> output

task1: compiles a C file and give the output with extension .0
code: gcc -c $CFILE

task2: generates assembly code of a C code and save it to an outputfile with .s extension
code: gcc -S $CFILE

task3: compiles a C file and creates an executable named cisfun
code: gcc $CFILE -o cisfun
