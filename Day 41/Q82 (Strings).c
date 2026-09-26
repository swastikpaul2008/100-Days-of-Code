/* Print each character of a string on a new line. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[256];
    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }
    input[strcspn(input, "\n")] = '\0';
    for (size_t index = 0; input[index] != '\0' && input[index] != '\n'; ++index) {
        putchar(input[index]);
        putchar('\n');
    }
    return 0;
}
