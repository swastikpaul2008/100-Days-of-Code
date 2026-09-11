/*
 * Reverse an array without taking extra space.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[100];
  if (scanf("%d", &count) != 1 || count < 1 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  for (int left = 0; left < count / 2; ++left) {
    int temporary = values[left];
    values[left] = values[count - left - 1];
    values[count - left - 1] = temporary;
  }
  for (int index = 0; index < count; ++index)
    printf("%d%c", values[index], index + 1 == count ? '\n' : ' ');
  return 0;
}
