/*
 * Write a program to print the following pattern:
 *
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 *
 */
#include <stdio.h>

int main(void) {
  for (int row = 0; row < 7; ++row) {
    int width = row <= 3 ? 2 * row + 1 : 13 - 2 * row;
    int spaces = (7 - width) / 2;
    for (int column = 0; column < spaces; ++column)
      putchar(' ');
    for (int column = 0; column < width; ++column)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
