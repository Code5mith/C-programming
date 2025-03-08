#include "stdio.h"

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int calc(int a, int b, int (*operation) (int, int)){
    return operation(a, b);
}

int main() {

    int a = 4;
    int b = 9;

    printf("Sum : %d \n", calc(a,b,add));
    printf("Diff : %d \n", calc(a,b,sub));

    return 0;
}

/*

  1. Function Pointers:
     - Function names represent memory addresses of their first instructions.
     - Function pointers allow passing functions as arguments.
     - Syntax: int (*funcPtr)(int, int) declares a pointer to a function.

  2. Sequential Code Execution:
     - Compiled machine code is stored contiguously in memory.
     - CPU executes instructions sequentially, following the program's flow.
     - Function calls change the CPU's execution flow, not the physical code arrangement.

  3. Function Address vs. Function Call:
     - Passing a function's name passes its address (function pointer).
     - Passing function(args) calls the function and passes the result.
     - Passing the function pointer is essential for dynamic function selection.
*/