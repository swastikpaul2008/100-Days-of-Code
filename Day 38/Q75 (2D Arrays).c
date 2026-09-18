/*
 * Add two matrices.
 */
#include <stdio.h>

int main(void) {
  int rows, columns, second_rows, second_columns;
  int first[20][20], second[20][20];
  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 20 ||
      columns < 1 || columns > 20)
    return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = 0; column < columns; ++column)
      if (scanf("%d", &first[row][column]) != 1)
        return 1;
  if (scanf("%d %d", &second_rows, &second_columns) != 2 ||
      second_rows != rows || second_columns != columns)
    return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = 0; column < columns; ++column)
      if (scanf("%d", &second[row][column]) != 1)
        return 1;
  for (int row = 0; row < rows; ++row) {
    for (int column = 0; column < columns; ++column)
      printf("%lld%c", (long long)first[row][column] + second[row][column],
             column + 1 == columns ? '\n' : ' ');
  }
  return 0;
}
