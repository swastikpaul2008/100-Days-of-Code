/*
 * Write a program to input a character and check whether it is a vowel or consonant using if–else.
 */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char character;
  if (scanf(" %c", &character) != 1)
    return 1;
  if (!isalpha((unsigned char)character))
    puts("Not an alphabet");
  else
    puts(strchr("aeiouAEIOU", character) != NULL ? "Vowel" : "Consonant");
  return 0;
}
