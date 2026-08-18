/*
 * Write a program to input a year and check whether it is a leap year or not using conditional statements.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  long year;
  if (scanf("%ld", &year) != 1)
    return 1;
  puts(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)
           ? "Leap year"
           : "Not a leap year");
  return 0;
}
