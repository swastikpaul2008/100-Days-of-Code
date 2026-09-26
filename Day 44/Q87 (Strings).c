/* Count spaces, digits, and special characters in a string. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char input[256];
    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }
    input[strcspn(input, "\n")] = '\0';
    int spaces = 0, digits = 0, special = 0;
    for (size_t index = 0; input[index] != '\0'; ++index) {
        unsigned char character = (unsigned char)input[index];
        if (character == ' ') ++spaces;
        else if (isdigit(character)) ++digits;
        else if (!isalpha(character) && character != '\n') ++special;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
