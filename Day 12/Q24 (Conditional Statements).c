/*
 * Write a program to calculate electricity bill based on units consumed with these rates:
 * First 100 units at ₹5/unit
 * Next 100 units at ₹7/unit
 * Next 100 units at ₹10/unit
 * Above at ₹12/unit
 */
#include <math.h>
#include <stdio.h>

int main(void) {
  double units, bill;
  if (scanf("%lf", &units) != 1 || !isfinite(units) || units < 0)
    return 1;
  bill = units <= 100   ? units * 5
         : units <= 200 ? 500 + (units - 100) * 7
         : units <= 300 ? 1200 + (units - 200) * 10
                        : 2200 + (units - 300) * 12;
  if (!isfinite(bill))
    return 1;
  printf("Bill: ₹%.15g\n", bill);
  return 0;
}
