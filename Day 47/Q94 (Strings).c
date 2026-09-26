/* Write a program to find the longest word in a sentence. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char sentence[512];
    char longest[512] = "";
    size_t current_start = 0;
    size_t current_length = 0;

    if (fgets(sentence, sizeof sentence, stdin) == NULL) {
        return 1;
    }

    for (size_t index = 0;; ++index) {
        unsigned char character = (unsigned char)sentence[index];
        if (character != '\0' && !isspace(character)) {
            if (current_length == 0) {
                current_start = index;
            }
            ++current_length;
        } else {
            if (current_length > strlen(longest)) {
                memcpy(longest, sentence + current_start, current_length);
                longest[current_length] = '\0';
            }
            current_length = 0;
            if (character == '\0') {
                break;
            }
        }
    }

    if (longest[0] == '\0') {
        puts("No word found");
    } else {
        puts(longest);
    }

    return 0;
}
