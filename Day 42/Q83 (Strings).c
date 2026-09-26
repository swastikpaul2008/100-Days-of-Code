/* Count vowels and consonants in a string. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char input[256];
    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }
    input[strcspn(input, "\n")] = '\0';
    int vowels = 0;
    int consonants = 0;
    for (size_t index = 0; input[index] != '\0'; ++index) {
        unsigned char character = (unsigned char)input[index];
        if (isalpha(character)) {
            if (strchr("aeiouAEIOU", character) != NULL) ++vowels;
            else ++consonants;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
