/* Write a program to remove all vowels from a string. */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[256];
    int found_vowel = 0;

    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }

    input[strcspn(input, "\n")] = '\0';
    for (size_t index = 0; input[index] != '\0'; ++index) {
        switch (input[index]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            found_vowel = 1;
            break;
        default:
            putchar(input[index]);
            break;
        }
    }

    if (!found_vowel && input[0] == '\0') {
        puts("Input is empty.");
    } else {
        putchar('\n');
    }

    return 0;
}
