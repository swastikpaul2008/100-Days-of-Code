/*
 * Write a program to input two numbers and display their sum, difference, product, and quotient.
 */
#include <limits.h>
#include <stdio.h>

int main(void) {
  long long first;
  long long second;
  long long sum;
  long long difference;
  long long product;

  if (scanf("%lld %lld", &first, &second) != 2) {
    return 1;
  }

  if ((second > 0 && first > LLONG_MAX - second) ||
      (second < 0 && first < LLONG_MIN - second) ||
      (second < 0 && first > LLONG_MAX + second) ||
      (second > 0 && first < LLONG_MIN + second)) {
    return 1;
  }
  sum = first + second;
  difference = first - second;

  if (first > 0) {
    if ((second > 0 && first > LLONG_MAX / second) ||
        (second < 0 && second < LLONG_MIN / first)) {
      return 1;
    }
  } else if (first < 0) {
    if ((second > 0 && first < LLONG_MIN / second) ||
        (second < 0 && first < LLONG_MAX / second)) {
      return 1;
    }
  }
  product = first * second;

  if (first == LLONG_MIN && second == -1) {
    return 1;
  }

  printf("Sum=%lld, Diff=%lld, Product=%lld, ", sum, difference, product);
  if (second == 0) {
    puts("Quotient=undefined");
  } else {
    printf("Quotient=%lld\n", first / second);
  }
  return 0;
}
