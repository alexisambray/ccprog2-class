/* Listing 2.2: Example program illustrating strlen() */
#include <stdio.h>
#include <string.h>

int main() {
  char str[4] = "ABC";
  char name[21];

  printf("The length of str is %d\n\n", strlen(str));
  printf("Input you name (max. of 20): ");
  scanf("%20s", name);
  printf("The length of your name is %d characters.\n", strlen(name));

  return 0;
}
