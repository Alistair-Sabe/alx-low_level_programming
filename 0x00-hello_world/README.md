Description Of The Project

task0: runs a C file through the preprocessor and save the result into another file
code: gcc -E $CFILE -o c 
-E -> preprocessor
-o -> output

task1: compiles a C file and give the output with extension .0
code: gcc -c $CFILE
-c -> runs first 3 stages of C compilation

task2: generates assembly code of a C code and save it to an outputfile with .s extension
code: gcc -S $CFILE

task3: compiles a C file and creates an executable named cisfun
code: gcc $CFILE -o cisfun
runs all 4 stages of compilation

task4: prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
**using _puts_
code: puts("\"Programming is like building a multilingual puzzle");
/ symbol to ensure that " is not seen as a special character

task5: prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line
**using _printf_
code: printf("%s\n", "_statement to be printed_"

task6: C program that prints the size of various types on the computer it is compiled and run on

task7:  script that generates the assembly code (Intel syntax) of a C code and save it in an output file
code: gcc -S -masm=intel $CFILE
      export CFILE=main.c

task8:               	


