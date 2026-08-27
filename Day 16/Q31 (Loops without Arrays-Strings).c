/*
 * Write a program to take a number as input and print its equivalent binary representation.
 */
#include <stdio.h>

int main(void) {
  unsigned long long number;
  if (scanf("%llu", &number) != 1)
    return 1;
  if (number == 0) {
    puts("0");
    return 0;
  }
  char binary[sizeof number * 8 + 1];
  size_t index = sizeof binary - 1;
  binary[index] = '\0';
  while (number != 0) {
    binary[--index] = (char)('0' + number % 2);
    number /= 2;
  }
  puts(&binary[index]);
  return 0;
}
