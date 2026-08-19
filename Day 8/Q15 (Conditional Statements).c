/*
 * Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char character;
  if (scanf(" %c", &character) != 1)
    return 1;
  if (isupper((unsigned char)character))
    puts("Uppercase alphabet");
  else if (islower((unsigned char)character))
    puts("Lowercase alphabet");
  else if (isdigit((unsigned char)character))
    puts("Digit");
  else
    puts("Special character");
  return 0;
}
