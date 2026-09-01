/*
 * Write a program to check if a number is a perfect number.
 */
#include <stdio.h>

int main(void) {
  long long number, sum = 1;
  if (scanf("%lld", &number) != 1 || number <= 0)
    return 1;
  for (long long divisor = 2; divisor <= number / divisor; ++divisor) {
    if (number % divisor == 0) {
      sum += divisor;
      if (divisor != number / divisor)
        sum += number / divisor;
    }
  }
  puts(sum == number && number != 1 ? "Perfect number" : "Not perfect number");
  return 0;
}
