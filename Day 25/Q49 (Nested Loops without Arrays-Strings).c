/*
 * Write a program to print the following pattern:
 * 5
 * 45
 * 345
 * 2345
 * 12345
 */
#include <stdio.h>

int main(void) {
  for (int row = 5; row >= 1; --row) {
    for (int value = row; value <= 5; ++value)
      printf("%d", value);
    putchar('\n');
  }
  return 0;
}
