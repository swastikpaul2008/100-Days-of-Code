/*
 * Write a program to check if a number is a strong number.
 */
#include <stdio.h>

int main(void) {
  long long number, value, sum = 0;
  if (scanf("%lld", &number) != 1 || number < 0)
    return 1;
  value = number;
  do {
    int digit = (int)(value % 10);
    long long factorial = 1;
    for (int i = 2; i <= digit; ++i)
      factorial *= i;
    sum += factorial;
    value /= 10;
  } while (value != 0);
  puts(sum == number ? "Strong number" : "Not strong number");
  return 0;
}
