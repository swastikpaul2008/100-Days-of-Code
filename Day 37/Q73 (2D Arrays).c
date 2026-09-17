/*
 * Find the sum of each row of a matrix and store it in an array.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int rows, columns, value, sums[20] = {0};
  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 20 ||
      columns < 1 || columns > 20)
    return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = 0; column < columns; ++column) {
      if (scanf("%d", &value) != 1)
        return 1;
      sums[row] += value;
    }
  for (int row = 0; row < rows; ++row)
    printf("%d%c", sums[row], row + 1 == rows ? '\n' : ' ');
  return 0;
}
