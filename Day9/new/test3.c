#include <stdio.h>

int sum(int k);
int sumOfDigits(int n);
int main() {
  int result = sum(10);
  printf("Sum of digits of 123: %d\n", sumOfDigits(12341234));
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
  	printf("%d= k\n", k);
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

