/*
 * Write a program to convert temperature from Celsius to Fahrenheit.
 */
#include <math.h>
#include <stdio.h>

int main(void) {
  double celsius;
  double fahrenheit;

  if (scanf("%lf", &celsius) != 1 || !isfinite(celsius))
    return 1;

  fahrenheit = celsius * 9.0 / 5.0 + 32.0;
  if (!isfinite(fahrenheit))
    return 1;

  printf("Fahrenheit=%.15g\n", fahrenheit);
  return 0;
}
