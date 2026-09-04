/*
 * Write a program to print the following pattern:
 * *
 * **
 * ***
 * ****
 * *****
 */
#include <stdio.h>

int main(void) {
  for (int row = 1; row <= 5; ++row) {
    for (int column = 0; column < row; ++column)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
