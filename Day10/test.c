#include <stdio.h>

int main(void) {
  char test[100] = "";
  scanf("%s", test);
  while (1) {
    char x = 0;
    for (int i = 0; i < 100; i++) {
      if (x == test[i]){
        break;

        x++;
      }

    }
  }
}
