// strcat() example #3
#include <stdio.h>
#include <string.h>

int main() {
  char string[255];
  char temp[10] = "world!";

  printf("%s\n", strcat(strcpy(string, "Hello"), temp));

  return 0;
}
