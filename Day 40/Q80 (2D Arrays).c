/* Multiply two matrices. */
#include <stdio.h>
#include <string.h>

int main(void) {
    int rows, shared, second_rows, columns, first[20][20], second[20][20]; long long result[20][20] = {{0}};
    if (scanf("%d %d", &rows, &shared) != 2 || rows < 1 || rows > 20 || shared < 1 || shared > 20) return 1;
    for (int row = 0; row < rows; ++row) for (int column = 0; column < shared; ++column) if (scanf("%d", &first[row][column]) != 1) return 1;
    if (scanf("%d %d", &second_rows, &columns) != 2 || second_rows != shared || columns < 1 || columns > 20) return 1;
    for (int row = 0; row < second_rows; ++row) for (int column = 0; column < columns; ++column) if (scanf("%d", &second[row][column]) != 1) return 1;
    for (int row = 0; row < rows; ++row) { for (int column = 0; column < columns; ++column) { for (int index = 0; index < shared; ++index) result[row][column] += first[row][index] * second[index][column]; printf("%lld%c", result[row][column], column + 1 == columns ? '\n' : ' '); } }
    return 0;
}
