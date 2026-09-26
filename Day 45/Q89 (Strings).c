/* Count frequency of a given character in a string. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[256];
    if (fgets(input, sizeof input, stdin) == NULL) {
        return 1;
    }
    input[strcspn(input, "\n")] = '\0';
    char target;
    if (scanf(" %c", &target) != 1) return 1;
    int count = 0;
    for (size_t index = 0; input[index] != '\0'; ++index) {
        if (input[index] == target) ++count;
    }
    printf("%d\n", count);
    return 0;
}
