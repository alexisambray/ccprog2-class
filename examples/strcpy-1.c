// strcpy() example #1
#include <stdio.h>
#include <string.h>

int main() {
  char string[255];
  char temp[20] = "Goodbye";

  // string = "Hello world!"; --> is erroneous!
  strcpy(string, "Hello world!");  // thus strcpy() was born
  printf("%s\n", string);

  printf("%s\n", strcpy(string, temp));
  printf("%d\n", (int)strlen(strcpy(string, "CCPROG2")));

  return 0;
}
