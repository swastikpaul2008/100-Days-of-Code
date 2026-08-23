/*
 * Write a program to calculate library fine based on late days as follows:
 * First 5 days late: ₹2/day
 * Next 5 days late: ₹4/day
 * Next 20 days days late: ₹6/day
 * More than 30 days: Membership Cancelled.
 */
#include <stdio.h>

int main(void) {
  int late, fine;
  if (scanf("%d", &late) != 1 || late < 0)
    return 1;
  if (late > 30)
    puts("Membership Cancelled");
  else {
    fine = late <= 5    ? late * 2
           : late <= 10 ? 10 + (late - 5) * 4
                        : 30 + (late - 10) * 6;
    printf("Fine ₹%d\n", fine);
  }
  return 0;
}
