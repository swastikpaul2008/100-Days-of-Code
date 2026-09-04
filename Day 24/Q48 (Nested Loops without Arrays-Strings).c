/*
 * Write a program to print the following pattern:
 * 1
 * 12
 * 123
 * 1234
 * 12345
 */
#include <stdio.h>

int main(void) {
  for (int row = 1; row <= 5; ++row) {
    for (int value = 1; value <= row; ++value)
      printf("%d", value);
    putchar('\n');
  }
  return 0;
}
