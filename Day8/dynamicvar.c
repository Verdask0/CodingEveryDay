#include <stdio.h>
#include <stdlib.h>  

int main() {
    int* dynamicVar = (int*)malloc(sizeof(int));  
    if (dynamicVar == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *dynamicVar = 50;  
    printf("Dynamic Variable: %d\n", *dynamicVar);
    
    free(dynamicVar);  
    return 0;
}
