/*
 * Delete an element from an array.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[100], position;
  if (scanf("%d", &count) != 1 || count < 1 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  if (scanf("%d", &position) != 1 || position < 0 || position >= count)
    return 1;
  for (int index = position; index + 1 < count; ++index)
    values[index] = values[index + 1];
  for (int index = 0; index < count - 1; ++index)
    printf("%d%c", values[index], index + 2 == count ? '\n' : ' ');
  return 0;
}
