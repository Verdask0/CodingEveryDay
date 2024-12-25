#include <stdio.h>

int globalVar = 100;  

void function1() {
    printf("Global variable in function1: %d\n", globalVar);
}

void function2() {
    globalVar = 200;  
    printf("Global variable in function2: %d\n", globalVar);
}

int main() {
    function1(); 
    function2();  
    function1(); 
    return 0;
}
