/* Reverse a string. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[256];
    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }
    input[strcspn(input, "\n")] = '\0';
    size_t length = strlen(input);
    if (length > 0 && input[length - 1] == '\n') input[--length] = '\0';
    for (size_t left = 0; left < length / 2; ++left) {
        char temporary = input[left];
        input[left] = input[length - left - 1];
        input[length - left - 1] = temporary;
    }
    puts(input);
    return 0;
}
