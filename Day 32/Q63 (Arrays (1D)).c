/*
 * Merge two arrays.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int first_count, second_count, first[100], second[100];
  if (scanf("%d", &first_count) != 1 || first_count < 1 || first_count > 100)
    return 1;
  for (int index = 0; index < first_count; ++index)
    if (scanf("%d", &first[index]) != 1)
      return 1;
  if (scanf("%d", &second_count) != 1 || second_count < 1 ||
      first_count + second_count > 100)
    return 1;
  for (int index = 0; index < second_count; ++index)
    if (scanf("%d", &second[index]) != 1)
      return 1;
  for (int index = 0; index < first_count; ++index)
    printf("%d ", first[index]);
  for (int index = 0; index < second_count; ++index)
    printf("%d%c", second[index], index + 1 == second_count ? '\n' : ' ');
  return 0;
}
