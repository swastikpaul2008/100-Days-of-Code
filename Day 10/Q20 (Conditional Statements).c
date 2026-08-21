/*
 * Write a program to display the day of the week based on a number (1–7) using switch-case.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
  int day;
  const char *names[] = {"Monday", "Tuesday",  "Wednesday", "Thursday",
                         "Friday", "Saturday", "Sunday"};
  if (scanf("%d", &day) != 1 || day < 1 || day > 7)
    return 1;
  puts(names[day - 1]);
  return 0;
}
