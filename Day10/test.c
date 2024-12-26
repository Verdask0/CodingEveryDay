#include <stdio.h>
#include <stdlib.h>

int main(void){
  int* dynamicVar = (int*)malloc(sizeof(int));
  *dynamicVar = 101;
  printf("int :%d\nand the address is %p\n",*dynamicVar,&dynamicVar);

  for(int i =0; i< 10; i++){
    printf("the pointer = %p\n",&dynamicVar+i);
  }
}
