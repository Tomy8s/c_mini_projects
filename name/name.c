#include <stdio.h>
#include <string.h>

int main() {
  int name_length_plus_1 = 20;
  char name[name_length_plus_1];
  printf("Please enter your name\n>");
  fgets(name, name_length_plus_1, stdin);
  name[strlen(name) - 1] = 0;
  printf("Hi %s!\n", name);
};