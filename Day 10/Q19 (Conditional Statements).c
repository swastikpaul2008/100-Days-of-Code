/*
 * Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  double a, b, c;
  if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0 ||
      a + b <= c || a + c <= b || b + c <= a)
    return 1;
  puts(a == b && b == c             ? "Equilateral"
       : a == b || b == c || a == c ? "Isosceles"
                                    : "Scalene");
  return 0;
}
