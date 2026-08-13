/*
 * Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 */
#include <math.h>
#include <stdio.h>

int main(void) {
  double length;
  double breadth;
  double area;
  double perimeter;

  if (scanf("%lf %lf", &length, &breadth) != 2 || !isfinite(length) ||
      !isfinite(breadth) || length < 0 || breadth < 0)
    return 1;

  area = length * breadth;
  perimeter = 2.0 * (length + breadth);
  if (!isfinite(area) || !isfinite(perimeter))
    return 1;

  printf("Area=%.15g, Perimeter=%.15g\n", area, perimeter);
  return 0;
}
