/*
 * Insert an element in a sorted array at the appropriate position.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, values[101], value;
  if (scanf("%d", &count) != 1 || count < 1 || count >= 100)
    return 1;
  for (int index = 0; index < count; ++index)
    if (scanf("%d", &values[index]) != 1)
      return 1;
  if (scanf("%d", &value) != 1)
    return 1;
  int position = count;
  while (position > 0 && values[position - 1] > value) {
    values[position] = values[position - 1];
    --position;
  }
  values[position] = value;
  for (int index = 0; index <= count; ++index)
    printf("%d%c", values[index], index == count ? '\n' : ' ');
  return 0;
}
