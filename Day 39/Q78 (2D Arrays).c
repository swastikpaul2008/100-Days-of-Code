/*
 * Find the sum of main diagonal elements for a square matrix.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int rows, columns, value;
  long long sum = 0;
  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 20 ||
      rows != columns)
    return 1;
  for (int row = 0; row < rows; ++row)
    for (int column = 0; column < columns; ++column) {
      if (scanf("%d", &value) != 1)
        return 1;
      if (row == column)
        sum += value;
    }
  printf("%lld\n", sum);
  return 0;
}
