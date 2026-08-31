/*
 * Write a program to find the product of odd digits of a number.
 */
#include <stdio.h>

static long long odd_digit_product(long long number, int *found) {
  long long quotient = number / 10;
  int digit = (int)(number % 10);
  long long product = quotient == 0 ? 1 : odd_digit_product(quotient, found);

  if (digit < 0)
    digit = -digit;
  if (digit % 2 != 0) {
    *found = 1;
    product *= digit;
  }
  return product;
}

static void print_odd_digits(long long number, int *printed) {
  long long quotient = number / 10;
  int digit = (int)(number % 10);

  if (quotient != 0)
    print_odd_digits(quotient, printed);
  if (digit < 0)
    digit = -digit;
  if (digit % 2 != 0) {
    if (*printed)
      putchar('*');
    printf("%d", digit);
    *printed = 1;
  }
}

int main(void) {
  long long number;
  long long product;
  int found = 0;

  if (scanf("%lld", &number) != 1)
    return 1;

  product = odd_digit_product(number, &found);
  if (!found) {
    puts("1 (no odd digits, assume 1)");
  } else {
    int printed = 0;
    printf("%lld (", product);
    print_odd_digits(number, &printed);
    puts(")");
  }
  return 0;
}
