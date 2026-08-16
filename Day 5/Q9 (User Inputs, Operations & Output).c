/*
 * Write a program to calculate simple and compound interest for given principal, rate, and time.
 */
#include <float.h>
#include <math.h>
#include <stdio.h>

static int print_amount(double amount) {
  char formatted[DBL_MAX_10_EXP + 16];
  int written = snprintf(formatted, sizeof(formatted), "%.2f", amount);
  if (written < 0 || (size_t)written >= sizeof(formatted))
    return 0;

  size_t length = (size_t)written;
  while (length > 0 && formatted[length - 1] == '0')
    formatted[--length] = '\0';
  if (length > 0 && formatted[length - 1] == '.')
    formatted[--length] = '\0';

  return fputs(formatted, stdout) != EOF;
}

int main(void) {
  double principal;
  double rate;
  double time;
  double simple_interest;
  double compound_interest;

  if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3 ||
      !isfinite(principal) || !isfinite(rate) || !isfinite(time) ||
      principal < 0 || rate < 0 || time < 0)
    return 1;

  simple_interest = principal * rate * time / 100.0;
  compound_interest = principal * (pow(1.0 + rate / 100.0, time) - 1.0);
  if (!isfinite(simple_interest) || !isfinite(compound_interest))
    return 1;

  printf("Simple Interest=");
  if (!print_amount(simple_interest))
    return 1;
  printf(", Compound Interest=");
  if (!print_amount(compound_interest))
    return 1;
  putchar('\n');
  return 0;
}
