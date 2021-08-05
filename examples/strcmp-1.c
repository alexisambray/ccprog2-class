// strcmp () example
#include <stdio.h>
#include <string.h>

int main() {
  char str1[8] = "CCPROG2";
  char str2[8] = "abc";
  char str3[8] = "ABC";

  printf("%d", strcmp("Hello", "World"));
  printf("%d\n", strcmp("Hello", str1));
  printf("%d\n", strcmp(str1, str2));
  printf("%d\n", strcmp(str2, str3));
  printf("%d\n", strcmp(str3, str2));
  printf("%d\n", strcmp(str3 + 2, str2 + 1));

  return 0;
}
