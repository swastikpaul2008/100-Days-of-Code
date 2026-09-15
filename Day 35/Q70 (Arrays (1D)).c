/*
 * Rotate an array to the right by k positions.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[100], positions;
  if (scanf("%d", &count) != 1 || count < 1 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  if (scanf("%d", &positions) != 1)
    return 1;
  positions %= count;
  if (positions < 0)
    positions += count;
  for (int index = 0; index < count; ++index)
    printf("%d%c", values[(count - positions + index) % count],
           index + 1 == count ? '\n' : ' ');
  return 0;
}
