/*
 * Write a program to find profit or loss percentage given cost price and selling price.
 */
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  double cost, selling;
  double percentage;

  if (scanf("%lf %lf", &cost, &selling) != 2 || !isfinite(cost) ||
      !isfinite(selling) || cost <= 0 || selling < 0)
    return 1;
  if (selling == cost)
    puts("No Profit No Loss");
  else {
    percentage = fabs(selling - cost) * 100.0 / cost;
    if (!isfinite(percentage))
      return 1;
    printf("%s %.15g%%\n", selling > cost ? "Profit" : "Loss", percentage);
  }
  return 0;
}
