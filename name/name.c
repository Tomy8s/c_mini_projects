#include <stdio.h>

int main() {
  char name[10];
  printf("Please enter your name\n>");
  gets(name);
  printf("Hi %s!\n", name);
};