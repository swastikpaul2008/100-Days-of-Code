/*
 * Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  char number[256];
  int frequency[10] = {0};
  if (scanf("%255s", number) != 1)
    return 1;
  for (size_t index = 0; number[index] != '\0'; ++index) {
    if (number[index] < '0' || number[index] > '9')
      return 1;
    ++frequency[number[index] - '0'];
  }
  int most = 0;
  for (int digit = 1; digit < 10; ++digit)
    if (frequency[digit] > frequency[most])
      most = digit;
  printf("%d\n", most);
  return 0;
}
