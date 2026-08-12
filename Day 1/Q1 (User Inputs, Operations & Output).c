/*
 * Write a program to input two numbers and display their sum.
 */
#include <math.h>
#include <stdio.h>

int main(void) {
  double first, second;
  double sum;

  if (scanf("%lf %lf", &first, &second) != 2 || !isfinite(first) ||
      !isfinite(second)) {
    return 1;
  }

  sum = first + second;
  if (!isfinite(sum)) {
    return 1;
  }

  printf("Sum = %.15g\n", sum);
  return 0;
}
