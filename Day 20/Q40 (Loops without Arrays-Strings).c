/*
 * Write a program to find the 1’s complement of a binary number and print it.
 */
#include <stdio.h>

int main(void) {
  char binary[256];
  if (scanf("%255s", binary) != 1)
    return 1;
  for (size_t index = 0; binary[index] != '\0'; ++index) {
    if (binary[index] != '0' && binary[index] != '1')
      return 1;
    binary[index] = binary[index] == '0' ? '1' : '0';
  }
  puts(binary);
  return 0;
}
