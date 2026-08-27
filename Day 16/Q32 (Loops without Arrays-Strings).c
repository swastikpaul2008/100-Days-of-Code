/*
 * Write a program to check if a number is a palindrome.
 */
#include <stdio.h>

int main(void) {
  long long number, value, reversed = 0;
  if (scanf("%lld", &number) != 1 || number < 0)
    return 1;
  value = number;
  do {
    reversed = reversed * 10 + value % 10;
    value /= 10;
  } while (value != 0);
  puts(reversed == number ? "Palindrome" : "Not palindrome");
  return 0;
}
