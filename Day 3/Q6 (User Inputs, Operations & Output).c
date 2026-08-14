/*
 * Write a program to swap two numbers using a third variable.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  long first, second, temporary;
  if (scanf("%ld %ld", &first, &second) != 2)
    return 1;
  temporary = first;
  first = second;
  second = temporary;
  printf("After swap: %ld %ld\n", first, second);
  return 0;
}
