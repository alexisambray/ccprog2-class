/* Listing 2.4: Example program illustrating strcpy() */
#include <stdio.h>
#include <string.h>

int main() {
  char source[8] = "COMPRO2";
  char str[4];
  char name[21];
  char destination[8];

  /* copy a string constant */
  strcpy(str, "ABC");  // str = "ABC"; is incorrect!
  printf("The value of str = %s.\n", str);

  /* copy a string constant with spaces in between */
  strcpy(name, "Juan dela Cruz");
  printf("The value of name = %s.\n", name);

  /* copy the value of a string */
  strcpy(destination, source);
  printf("The value of destination = %s.\n", destination);

  return 0;
}
