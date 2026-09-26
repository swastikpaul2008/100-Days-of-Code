/* Write a program to check if two strings are anagrams of each other. */
#include <stdio.h>
#include <string.h>

static void remove_newline(char *text)
{
    text[strcspn(text, "\n")] = '\0';
}

int main(void)
{
    char first[256];
    char second[256];
    int counts[256] = {0};

    if (fgets(first, sizeof first, stdin) == NULL ||
        fgets(second, sizeof second, stdin) == NULL) {
        return 1;
    }

    remove_newline(first);
    remove_newline(second);
    if (strlen(first) != strlen(second)) {
        puts("Not anagrams");
        return 0;
    }

    for (size_t index = 0; first[index] != '\0'; ++index) {
        ++counts[(unsigned char)first[index]];
        --counts[(unsigned char)second[index]];
    }

    for (size_t index = 0; index < sizeof counts / sizeof counts[0]; ++index) {
        if (counts[index] != 0) {
            puts("Not anagrams");
            return 0;
        }
    }

    puts("Anagrams");
    return 0;
}
