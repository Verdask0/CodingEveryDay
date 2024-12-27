#include <stdio.h>
#include <unistd.h> // For usleep

int main() {
  printf("Hello");
  fflush(stdout);  // Immediately flush "Hello" to the terminal
  usleep(10000000); // 1-second delay
  printf(", World!\n");
  return 0;
}
