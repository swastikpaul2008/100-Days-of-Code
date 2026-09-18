/*
 * Check if a matrix is symmetric.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int rows, columns, matrix[20][20], symmetric = 1;
  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 20 ||
      rows != columns)
    return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = 0; column < columns; ++column)
      if (scanf("%d", &matrix[row][column]) != 1)
        return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = row + 1; column < columns; ++column)
      if (matrix[row][column] != matrix[column][row])
        symmetric = 0;
  puts(symmetric ? "True" : "False");
  return 0;
}
