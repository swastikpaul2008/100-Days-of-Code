/*
 * Check if the elements on the diagonal of a matrix are distinct.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int rows, columns, matrix[20][20], distinct = 1;
  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 20 ||
      columns < 1 || columns > 20 || rows != columns)
    return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = 0; column < columns; ++column)
      if (scanf("%d", &matrix[row][column]) != 1)
        return 1;
  for (int first = 0; first < rows; ++first)
    for (int second = first + 1; second < rows; ++second)
      if (matrix[first][first] == matrix[second][second])
        distinct = 0;
  puts(distinct ? "True" : "False");
  return 0;
}
