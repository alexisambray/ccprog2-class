// strcat() example #2
#include <stdio.h>
#include <string.h>

int main() {
  char string[255];
  char temp[10] = "world!";

  strcat(strcpy(string, "Hello"), temp);
  printf("%s\n", string);

  return 0;
}
