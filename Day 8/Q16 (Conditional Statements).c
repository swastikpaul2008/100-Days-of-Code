/*
 * Write a program to input three numbers and find the largest among them using if–else.
 */
#include <math.h>
#include <stdio.h>

int main(void) {
  double first;
  double second;
  double third;
  double largest;

  if (scanf("%lf %lf %lf", &first, &second, &third) != 3 || !isfinite(first) ||
      !isfinite(second) || !isfinite(third))
    return 1;

  largest = first;
  if (second > largest)
    largest = second;
  if (third > largest)
    largest = third;
  printf("Largest is %.15g\n", largest);
  return 0;
}
