/* Convert a lowercase string to uppercase without using built-in functions. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char input[256];
    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }
    input[strcspn(input, "\n")] = '\0';
    for (size_t index = 0; input[index] != '\0'; ++index) {
        input[index] = (char)toupper((unsigned char)input[index]);
    }
    puts(input);
    return 0;
}
