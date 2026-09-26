/* Perform diagonal traversal of a matrix. */
#include <stdio.h>
#include <string.h>

int main(void) {
    int rows, columns, matrix[20][20];
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 20 || columns < 1 || columns > 20) return 1;
    for (int row = 0; row < rows; ++row) for (int column = 0; column < columns; ++column) if (scanf("%d", &matrix[row][column]) != 1) return 1;
    for (int diagonal = 0; diagonal < rows + columns - 1; ++diagonal) for (int row = 0; row < rows; ++row) { int column = diagonal - row; if (column >= 0 && column < columns) printf("%d ", matrix[row][column]); }
    putchar('\n');
    return 0;
}
