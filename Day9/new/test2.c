#include <stdio.h>
#include <unistd.h> // For usleep
#include <string.h>

int main(void) {
  char test[100];
  printf("Enter a string: ");
  scanf("%99s", test);

  int length = strlen(test);
  char buffer[101]; // Temporary buffer to hold the animated output
  memset(buffer, ' ', length); // Fill buffer with spaces
  buffer[length] = '\0'; // Null-terminate the string

  for (int i = 0; i < length; i++) {
    char x = 'a';
    while (x <= test[i]) {
      buffer[i] = x; // Update the animated character
      printf("\r%s", buffer); // Print the entire string
      fflush(stdout);
      usleep(50000); // 50ms delay
      x++;
    }
  }
  printf("\n"); // Final newline after the animation
  return 0;
}
