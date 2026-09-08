/*
 * Write a program to print all the prime numbers from 1 to n.
 */
#include <stdio.h>

int main(void) {
  int limit;
  if (scanf("%d", &limit) != 1 || limit < 2)
    return 1;
  for (int number = 2; number <= limit; ++number) {
    int prime = 1;
    for (int divisor = 2; divisor <= number / divisor; ++divisor)
      if (number % divisor == 0)
        prime = 0;
    if (prime)
      printf("%d%c", number, number == limit ? '\n' : ' ');
  }
  return 0;
}
