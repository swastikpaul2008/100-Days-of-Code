/*
 * Write a program to swap the first and last digit of a number.
 */
#include <stdio.h>

int main(void) {
  long long number, value, place = 1, first, last;
  if (scanf("%lld", &number) != 1 || number < 0)
    return 1;
  if (number < 10) {
    printf("%lld\n", number);
    return 0;
  }
  value = number;
  while (value >= 10) {
    value /= 10;
    place *= 10;
  }
  first = value;
  last = number % 10;
  printf("%lld\n", number - first * place - last + last * place + first);
  return 0;
}
