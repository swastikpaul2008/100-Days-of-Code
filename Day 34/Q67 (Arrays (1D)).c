/*
 * Insert an element in an array at a given position.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[101], position, value;
  if (scanf("%d", &count) != 1 || count < 1 || count >= 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  if (scanf("%d %d", &position, &value) != 2 || position < 0 ||
      position > count)
    return 1;
  for (int index = count; index > position; --index)
    values[index] = values[index - 1];
  values[position] = value;
  for (int index = 0; index <= count; ++index)
    printf("%d%c", values[index], index == count ? '\n' : ' ');
  return 0;
}
