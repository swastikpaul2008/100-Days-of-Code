/*
 * Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
 */
#include <stdio.h>

int main(void) {
  int terms;
  double sum = 1.0;

  if (scanf("%d", &terms) != 1 || terms < 1)
    return 1;

  for (int index = 2; index <= terms; ++index)
    sum += (2.0 * index - 1.0) / (2.0 * index);
  printf("Approximate sum: %.1f\n", sum);
  return 0;
}
