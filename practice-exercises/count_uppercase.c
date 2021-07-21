/* String program that counts the uppercase characters */

#include <stdio.h>
#include <string.h>

int countUppercase(char str[]) {
  int numUppercase = 0;

  for (int i = 0; i < strlen(str); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      numUppercase++;
  }
  return numUppercase;
}

int main() {
  char str[] = "ABCdefGHI";

  printf("%d", countUppercase(str));
}
