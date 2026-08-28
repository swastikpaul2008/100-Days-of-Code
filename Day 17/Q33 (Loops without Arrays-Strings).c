/*
 * Write a program to check if a number is an Armstrong number.
 */
#include <math.h>
#include <stdio.h>

int main(void) {
  long long number, value, sum = 0;
  int digits = 0;
  if (scanf("%lld", &number) != 1 || number < 0)
    return 1;
  value = number;
  do {
    ++digits;
    value /= 10;
  } while (value != 0);
  value = number;
  do {
    sum += (long long)pow(value % 10, digits);
    value /= 10;
  } while (value != 0);
  puts(sum == number ? "Armstrong" : "Not Armstrong");
  return 0;
}
