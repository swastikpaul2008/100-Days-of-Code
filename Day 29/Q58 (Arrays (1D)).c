/*
 * Find the maximum and minimum element in an array.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, value, minimum, maximum;
  if (scanf("%d", &count) != 1 || count < 1 || count > 100 ||
      scanf("%d", &value) != 1)
    return 1;
  minimum = maximum = value;
  for (int index = 1; index < count; ++index) {
    if (scanf("%d", &value) != 1)
      return 1;
    if (value < minimum)
      minimum = value;
    if (value > maximum)
      maximum = value;
  }
  printf("Max=%d, Min=%d\n", maximum, minimum);
  return 0;
}
