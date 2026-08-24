/*
 * Write a program to print numbers from 1 to n.
 */
#include <stdio.h>

int main(void) {
  long long n;
  if (scanf("%lld", &n) != 1 || n < 1 || n > 100000)
    return 1;
  for (long long i = 1; i <= n; ++i) {
    printf("%lld%c", i, i == n ? '\n' : ' ');
  }
  return 0;
}
