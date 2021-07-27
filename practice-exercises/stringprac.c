#include <stdio.h>
#include <string.h>

int mystrlen(const char str[]) {
  int length = 0, i = 0;

  while (str[i] != '\0') {
    length++;
    i++;
  }
  return length;
}

char* mystrcpy(char* dest, const char* src) {
  for (int i = 0; i <= mystrlen(src); i++) {
    dest[i] = src[i];
  }
  return dest;
}

char* mystrcat(char* dest, const char* src) {
  for (int i = 0, j = mystrlen(dest); i <= mystrlen(src); i++, j++) {
    dest[j] = src[i];
  }
}

int main() {
  char str1[100] = "JAP-JAP";
  char str2[100] = "ALEX";

  printf("%d is the length\n", mystrlen(str1));

  mystrcat(str2, str1);
  puts(str2);

  mystrcpy(str2, str1);
  puts(str2);
  return 0;
}
