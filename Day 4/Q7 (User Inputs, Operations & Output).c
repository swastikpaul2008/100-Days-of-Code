/*
 * Write a program to swap two numbers without using a third variable.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  long first, second;
  if (scanf("%ld %ld", &first, &second) != 2)
    return 1;
  first ^= second;
  second ^= first;
  first ^= second;
  printf("After swap: %ld %ld\n", first, second);
  return 0;
}
