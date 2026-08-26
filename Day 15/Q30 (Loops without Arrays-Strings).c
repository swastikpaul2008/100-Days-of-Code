/*
 * Write a program to reverse a given number.
 */
#include <stdio.h>

int main(void) {
  long long n, value, reversed = 0;
  if (scanf("%lld", &n) != 1)
    return 1;
  value = n < 0 ? -n : n;
  do {
    reversed = reversed * 10 + value % 10;
    value /= 10;
  } while (value != 0);
  printf("%s%lld\n", n < 0 ? "-" : "", reversed);
  return 0;
}
