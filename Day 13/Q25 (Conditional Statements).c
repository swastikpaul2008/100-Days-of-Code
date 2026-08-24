/*
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */
#include <limits.h>
#include <stdio.h>

int main(void) {
  long long first;
  long long second;
  long long result;
  char operation;

  if (scanf("%lld %lld %c", &first, &second, &operation) != 3)
    return 1;

  switch (operation) {
  case '+':
    if ((second > 0 && first > LLONG_MAX - second) ||
        (second < 0 && first < LLONG_MIN - second))
      return 1;
    result = first + second;
    break;
  case '-':
    if ((second < 0 && first > LLONG_MAX + second) ||
        (second > 0 && first < LLONG_MIN + second))
      return 1;
    result = first - second;
    break;
  case '*':
    if (first > 0) {
      if ((second > 0 && first > LLONG_MAX / second) ||
          (second < 0 && second < LLONG_MIN / first))
        return 1;
    } else if (first < 0) {
      if ((second > 0 && first < LLONG_MIN / second) ||
          (second < 0 && first < LLONG_MAX / second))
        return 1;
    }
    result = first * second;
    break;
  case '/':
    if (second == 0 || (first == LLONG_MIN && second == -1))
      return 1;
    result = first / second;
    break;
  case '%':
    if (second == 0 || (first == LLONG_MIN && second == -1))
      return 1;
    result = first % second;
    break;
  default:
    return 1;
  }

  printf("%lld\n", result);
  return 0;
}
