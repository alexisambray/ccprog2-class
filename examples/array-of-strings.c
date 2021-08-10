/* Listing 2.8: Array of strings example program 1 */
#include <stdio.h>

typedef char String10[11];

int main() {
  // keywords is declared/defined as an array of String10. We show the
  // initialization for the 1st to 5 keywords only
  String10 keywords[32] = {"auto", "break", "case", "char", "const"};

  int i;

  printf("The C keywords are: \n\n");
  for (i = 0; i < 5; i++)
    printf("%s\n", keywords[i]);

  return 0;
}
