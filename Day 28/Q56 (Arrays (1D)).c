/*
 * Read and print elements of a one-dimensional array.
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
  for (int index = 0; index < count; ++index)
    printf("%d%c", values[index], index + 1 == count ? '\n' : ' ');
  return 0;
}
