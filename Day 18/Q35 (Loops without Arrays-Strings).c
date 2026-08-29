/*
 * Write a program to print all factors of a given number.
 */
#include <stdio.h>

int main(void) {
  long long number;
  if (scanf("%lld", &number) != 1 || number <= 0)
    return 1;
  for (long long divisor = 1; divisor <= number; ++divisor)
    if (number % divisor == 0)
      printf("%lld%c", divisor, divisor == number ? '\n' : ' ');
  return 0;
}
