/*
 * Write a program to calculate the factorial of a number.
 */
#include <stdio.h>

int main(void) {
  unsigned long long n, factorial = 1;
  if (scanf("%llu", &n) != 1 || n > 20)
    return 1;
  for (unsigned long long value = 2; value <= n; ++value)
    factorial *= value;
  printf("%llu\n", factorial);
  return 0;
}
