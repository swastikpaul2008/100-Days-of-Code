/*
 * Write a program to print the product of even numbers from 1 to n.
 */
#include <limits.h>
#include <stdio.h>

int main(void) {
  long long n;
  long long product = 1;

  if (scanf("%lld", &n) != 1 || n < 1)
    return 1;

  for (long long value = 2; value <= n;) {
    if (product > LLONG_MAX / value)
      return 1;
    product *= value;
    if (value > n - 2)
      break;
    value += 2;
  }

  printf("%lld (", product);
  if (n < 2) {
    printf("no even numbers");
  } else {
    int first = 1;
    for (long long value = 2; value <= n;) {
      if (!first)
        printf(" * ");
      printf("%lld", value);
      first = 0;
      if (value > n - 2)
        break;
      value += 2;
    }
  }
  puts(")");
  return 0;
}
