/*
 * Write a program to input an integer and check whether it is even or odd using if–else.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  long value;
  if (scanf("%ld", &value) != 1)
    return 1;
  printf("%ld is %s\n", value, value % 2 == 0 ? "even" : "odd");
  return 0;
}
