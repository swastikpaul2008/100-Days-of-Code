/*
 * Write a program to print the following pattern:
 * *****
 *  ****
 *   ***
 *    **
 *     *
 */
#include <stdio.h>

int main(void) {
  for (int row = 5; row >= 1; --row) {
    for (int spaces = 0; spaces < 5 - row; ++spaces)
      putchar(' ');
    for (int star = 0; star < row; ++star)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
