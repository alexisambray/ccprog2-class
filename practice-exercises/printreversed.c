/* String program that prints reversed output */

#include <stdio.h>
#include <string.h>

void printReversed(char* str) {
  for (int i = strlen(str) - 1; i >= 0; i--) {
    printf("%c", str[i]);
  }
}

int main() {
  char str[] = "NEWYORK";
  printReversed(str);
}
