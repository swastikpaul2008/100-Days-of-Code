/*
 * Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 */
#include <stdio.h>

int main(void) {
  int terms;
  double sum = 0.0;
  if (scanf("%d", &terms) != 1 || terms < 1)
    return 1;
  for (int index = 1; index <= terms; ++index)
    sum += (2.0 * index) / (4.0 * index - 1.0);
  printf("Approximate sum: %.2f\n", sum);
  return 0;
}
