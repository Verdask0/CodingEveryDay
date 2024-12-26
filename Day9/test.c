#include <stdio.h>
#include <stdlib.h>

int main(void){
  printf("this test\nany saves after the make file will be executed \n");
  char* rint = (char*)malloc(1);
  *rint = 198;
    printf("int = %c\n",*rint);
  printf( "Delete file (are you really sure??):");
}
