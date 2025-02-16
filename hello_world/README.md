### ---- Task 0 :

    Command used to do preprocessing and save the result into another file wich is a variable :
    gcc -E $CFILE > c


### ---- Task 1 :

    Command used to compile (to generate object (.o)) a C file but without do link. With file name saved in the variable $FILE, but with extansion .o (not .c) : 
    gcc -c $FILE


### ---- Task 2 : 

    Command used to generate the assembly code of a C code and save it in an output file. With file name saved in the  variable $CFILE, but with extansion .s (not .c) : 
    gcc -S $CFILE


### ---- Task 3 : 

    Command used to compile a C file and create an executable named cisfun : 
    gcc $CFILE -o cisfun

### ---- Task 4 : 

    Command used to write a program that prints a specific text followed by a new line and uses the function puts() :
program [4-puts.c](https://github.com/Mylliah/holbertonschool-low_level_programming/blob/main/hello_world/4-puts.c)    


### ---- Task 5 :

    Command used to write a program that prints a specific text followed by the new line uses the function printf() : 
program [5-printf.c](https://github.com/Mylliah/holbertonschool-low_level_programming/blob/main/hello_world/5-printf.c)


### ---- Task 6 :

    Command used to write a program that prints the size of various types on the computer it is compiled and run o, should produce the exact same output as in the example, should return 0 : 
program [6-size.c](https://github.com/Mylliah/holbertonschool-low_level_programming/blob/main/hello_world/6-size.c)



