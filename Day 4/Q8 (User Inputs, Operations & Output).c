/*
 * Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  long long n;
  if (scanf("%lld", &n) != 1 || n < 0)
    return 1;
  printf("Sum=%lld\n", n * (n + 1) / 2);
  return 0;
}
