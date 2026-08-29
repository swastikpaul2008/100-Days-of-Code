/*
 * Write a program to find the HCF (GCD) of two numbers.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long long first, second;
  if (scanf("%lld %lld", &first, &second) != 2)
    return 1;
  first = llabs(first);
  second = llabs(second);
  while (second != 0) {
    long long remainder = first % second;
    first = second;
    second = remainder;
  }
  printf("%lld\n", first);
  return 0;
}
