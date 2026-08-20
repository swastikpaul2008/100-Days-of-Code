/*
 * Write a program to find the roots of a quadratic equation and categorize them.
 */
#include <math.h>
#include <stdio.h>

int main(void) {
  double a, b, c, discriminant;

  if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || !isfinite(a) || !isfinite(b) ||
      !isfinite(c) || a == 0.0) {
    return 1;
  }

  discriminant = b * b - 4.0 * a * c;
  if (!isfinite(discriminant)) {
    return 1;
  }

  if (discriminant > 0.0) {
    double root_one = (-b + sqrt(discriminant)) / (2.0 * a);
    double root_two = (-b - sqrt(discriminant)) / (2.0 * a);

    if (!isfinite(root_one) || !isfinite(root_two)) {
      return 1;
    }
    printf("Roots are real and different: %.15g, %.15g\n", root_one, root_two);
  } else if (discriminant == 0.0) {
    double root = -b / (2.0 * a);

    if (!isfinite(root)) {
      return 1;
    }
    printf("Roots are real and same: %.15g\n", root);
  } else {
    puts("Roots are complex");
  }
  return 0;
}
