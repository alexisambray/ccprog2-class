// strcpy() examples #2
#include <stdio.h>
#include <string.h>

int main() {
  char string[255];
  char super[20] = "SUPERMAN";

  printf("%s\n", strcpy(string, super));
  strcpy(string + 5, "GIRL");  // pointer arithmetic here
  printf("%s %s\n", super, string);

  return 0;
}
