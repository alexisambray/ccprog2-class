// strcat() example #1
#include <stdio.h>
#include <string.h>

int main() {
  char string[255];
  char temp[10] = "world!";

  strcpy(string, "Hello");
  strcat(string, temp);

  printf("%s\n", temp);
  printf("%s\n", string);

  return 0;
}
