/*
 * Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
 * 90-100: Grade A
 * 80-89: Grade B
 * 70-79: Grade C
 * 60-69: Grade D
 * below 60: Grade F.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  double percentage;
  if (scanf("%lf", &percentage) != 1 || percentage < 0.0 || percentage > 100.0)
    return 1;
  puts(percentage >= 90   ? "Grade A"
       : percentage >= 80 ? "Grade B"
       : percentage >= 70 ? "Grade C"
       : percentage >= 60 ? "Grade D"
                          : "Grade F");
  return 0;
}
