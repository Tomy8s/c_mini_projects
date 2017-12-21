#include <stdio.h>

int main() {
  int a[1];
  int b[1];
  char operator[1];
  printf("Enter the first number in the calculation: ");
  scanf("%d", a);
  printf("Enter the operator for the calculation (+,-,/,x): ");
  scanf("%s", operator);
  printf("Enter the second number in the calculation: ");
  scanf("%d", b);
  switch (operator[0])
  {
    case '+':
      printf("%d %s %d = %d\n", a[0], operator, b[0], a[0] + b[0]);
      break;
    case '-':
      printf("%d %s %d = %d\n", a[0], operator, b[0], a[0] - b[0]);
      break;
    case '/':
      printf("%d %s %d = %d\n", a[0], operator, b[0], a[0] / b[0]);
      break;
    case 'x':
      printf("%d %s %d = %d\n", a[0], operator, b[0], a[0] * b[0]);
      break;
    default:
      printf("Operator %s not recognised\n", operator);
  }
  return 0;
}
