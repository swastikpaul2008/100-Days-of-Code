/*
 * Write a program to print the sum of the first n odd numbers.
 */
#include <stdio.h>

int main(void) {
  long long n;
  if (scanf("%lld", &n) != 1 || n < 1)
    return 1;
  printf("%lld\n", n * n);
  return 0;
}
