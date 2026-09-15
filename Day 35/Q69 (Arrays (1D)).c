/*
 * Find the second largest element in an array.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[100];
  if (scanf("%d", &count) != 1 || count < 2 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  int largest = values[0], second = 0, found = 0;
  for (int index = 1; index < count; ++index) {
    if (values[index] > largest) {
      second = largest;
      largest = values[index];
      found = 1;
    } else if (values[index] < largest && (!found || values[index] > second)) {
      second = values[index];
      found = 1;
    }
  }
  if (!found)
    return 1;
  printf("%d\n", second);
  return 0;
}
