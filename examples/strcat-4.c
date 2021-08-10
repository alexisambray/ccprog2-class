/* Listing 2.5: Example program illustrating strcat() */
#include <stdio.h>
#include <string.h>

int main() {
  char str1[4] = "ABC";
  char str2[4] = "DEF";
  char string[20];

  // initialize as empty string
  strcpy(string, "");
  // concatenate empty string "" and "Hello"
  strcat(string, "Hello");
  printf("string = %s\n", string);

  strcpy(string, "");
  strcat(string, str1);
  strcat(string, " ");  // append space
  strcat(string, str2);
  printf("string = %s\n", string);

  return 0;
}
