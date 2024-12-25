#include <stdio.h>

void exampleFunction() {
  int localVar = 10;
  if (localVar == 10) {
    int blockVar = 20;
    printf("blockVar: %d\n", blockVar);
  }
  printf("localVar: %d\n", localVar);
}

int main() {
  exampleFunction();
  return 0;
}
