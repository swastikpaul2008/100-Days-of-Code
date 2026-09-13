/*
 * Search in a sorted array using binary search.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[100], target, left = 0, right;
  if (scanf("%d", &count) != 1 || count < 1 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  if (scanf("%d", &target) != 1)
    return 1;
  right = count - 1;
  while (left <= right) {
    int middle = left + (right - left) / 2;
    if (values[middle] == target) {
      printf("Found at index %d\n", middle);
      return 0;
    }
    if (values[middle] < target)
      left = middle + 1;
    else
      right = middle - 1;
  }
  puts("-1");
  return 0;
}
