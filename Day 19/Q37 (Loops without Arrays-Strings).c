/*
 * Write a program to find the LCM of two numbers.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long long first, second, a, b;
  if (scanf("%lld %lld", &first, &second) != 2)
    return 1;
  a = llabs(first);
  b = llabs(second);
  while (b != 0) {
    long long remainder = a % b;
    a = b;
    b = remainder;
  }
  if (a == 0) {
    puts("0");
    return 0;
  }
  printf("%lld\n", llabs(first / a * second));
  return 0;
}
