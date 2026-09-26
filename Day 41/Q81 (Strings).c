/* Count characters in a string without using built-in length functions. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[256];
    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }
    input[strcspn(input, "\n")] = '\0';
    size_t length = 0;
    while (input[length] != '\0' && input[length] != '\n') {
        ++length;
    }
    printf("%zu\n", length);
    return 0;
}
