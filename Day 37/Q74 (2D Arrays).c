/*
 * Find the transpose of a matrix.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int rows, columns, matrix[20][20];
  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 20 ||
      columns < 1 || columns > 20)
    return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = 0; column < columns; ++column)
      if (scanf("%d", &matrix[row][column]) != 1)
        return 1;
  for (int column = 0; column < columns; ++column) {
    for (int row = 0; row < rows; ++row)
      printf("%d%c", matrix[row][column], row + 1 == rows ? '\n' : ' ');
  }
  return 0;
}
