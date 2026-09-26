/* Toggle case of each character in a string. */
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
        if (islower((unsigned char)input[index])) {
            input[index] = (char)toupper((unsigned char)input[index]);
        } else if (isupper((unsigned char)input[index])) {
            input[index] = (char)tolower((unsigned char)input[index]);
        }
    }

    puts(input);
    return 0;
}
