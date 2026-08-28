/*
 * Write a program to check if a number is prime.
 */
#include <stdio.h>

int main(void) {
  long long number;
  if (scanf("%lld", &number) != 1 || number < 2) {
    puts("Not prime");
    return 0;
  }
  for (long long divisor = 2; divisor <= number / divisor; ++divisor)
    if (number % divisor == 0) {
      puts("Not prime");
      return 0;
    }
  puts("Prime");
  return 0;
}
