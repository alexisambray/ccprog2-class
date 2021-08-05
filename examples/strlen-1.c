// strlen() example #1
#include <stdio.h>
#include <string.h>

int main() {
  printf("%d\n", (int)strlen("Hello world!"));
  printf("%d\n", (int)strlen("DLSU"));
  printf("%d\n", (int)strlen("X"));
  printf("%d\n", (int)strlen(" "));  // blank space
  printf("%d\n", (int)strlen(""));   // empty string

  return 0;
}
