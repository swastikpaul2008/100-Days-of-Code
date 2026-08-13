/*
 * Write a program to calculate the area and circumference of a circle given its radius.
 */
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  double radius;
  double area;
  double circumference;

  if (scanf("%lf", &radius) != 1 || !isfinite(radius) || radius < 0)
    return 1;

  area = acos(-1.0) * radius * radius;
  circumference = 2.0 * acos(-1.0) * radius;
  if (!isfinite(area) || !isfinite(circumference))
    return 1;

  printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
  return 0;
}
