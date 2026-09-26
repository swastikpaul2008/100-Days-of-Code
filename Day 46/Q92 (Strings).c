/* Write a program to find the first repeating lowercase alphabet in a string. */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[256];
    int counts[26] = {0};

    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }

    input[strcspn(input, "\n")] = '\0';
    for (size_t index = 0; input[index] != '\0'; ++index) {
        char character = input[index];
        if (character >= 'a' && character <= 'z') {
            int position = character - 'a';
            ++counts[position];
            if (counts[position] == 2) {
                printf("%c\n", character);
                return 0;
            }
        }
    }

    puts("No repeating lowercase alphabet");
    return 0;
}
