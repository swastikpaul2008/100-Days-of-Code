/*
 * Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  long seconds;
  if (scanf("%ld", &seconds) != 1 || seconds < 0)
    return 1;
  printf("%ld:%ld:%ld\n", seconds / 3600, seconds / 60 % 60, seconds % 60);
  return 0;
}
