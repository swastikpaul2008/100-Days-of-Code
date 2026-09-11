/*
 * Search for an element in an array using linear search.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[100], target;
  if (scanf("%d", &count) != 1 || count < 1 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  if (scanf("%d", &target) != 1)
    return 1;
  for (int index = 0; index < count; ++index)
    if (values[index] == target) {
      printf("Found at index %d\n", index);
      return 0;
    }
  puts("-1");
  return 0;
}
