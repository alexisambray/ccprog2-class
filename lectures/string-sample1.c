#include <stdio.h>

int main() {
  char name[10];             // string variable declaration
  char animal[10] = "BEAR";  // this is a string variable definition

  // input a string via scanf()
  scanf("%s", name);  // input the value of name
  printf("%s\n", name);

  // output a string via printf()
  printf("%s\n", animal);  // %s is the formatting of a string
  return 0;
}
