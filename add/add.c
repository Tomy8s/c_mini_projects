#include <stdio.h>
#include <string.h>

int main() {
  int a[1];
  int b[1];
  printf("Enter the first number to add:\n");
  scanf("%d", a);
  printf("Enter the second number to add:\n");
  scanf("%d", b);
  printf("%d + %d = %d\n", a[0], b[0], a[0] + b[0]);
  return 0;
};