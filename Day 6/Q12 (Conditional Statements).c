/*
 * Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  long value;
  if (scanf("%ld", &value) != 1)
    return 1;
  puts(value > 0 ? "Positive" : value < 0 ? "Negative" : "Zero");
  return 0;
}
