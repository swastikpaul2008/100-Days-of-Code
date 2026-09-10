/*
 * Count even and odd numbers in an array.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, value, even = 0, odd = 0;
  if (scanf("%d", &count) != 1 || count < 1 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index) {
    if (scanf("%d", &value) != 1)
      return 1;
    if (value % 2 == 0)
      ++even;
    else
      ++odd;
  }
  printf("Even=%d, Odd=%d\n", even, odd);
  return 0;
}
