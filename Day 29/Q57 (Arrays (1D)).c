/*
 * Find the sum of array elements.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int count, value;
  long long sum = 0;
  if (scanf("%d", &count) != 1 || count < 1 || count > 100)
    return 1;
  for (int index = 0; index < count; ++index) {
    if (scanf("%d", &value) != 1)
      return 1;
    sum += value;
  }
  printf("%lld\n", sum);
  return 0;
}
