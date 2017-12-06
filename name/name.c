#include <stdio.h>
#include <string.h>

int main() {
  char name[10];
  printf("Please enter your name\n>");
  fgets(name, 10, stdin);
  name[strlen(name)-1] = 0;
  printf("Hi %s!\n", name);
};