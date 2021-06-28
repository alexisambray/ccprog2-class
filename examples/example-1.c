/* Listing 1.1: Array declaration and accessing elements */

#include <stdio.h>

int main() {
  char coursecode[7] = {'C', 'O', 'M', 'P', 'R', 'O', '2'};
  int A[5];
  int i;

  /* Note: for loop is often used together with arrays */
  for (i = 0; i < 7; i++)
    printf("%c", coursecode[i]);
  printf("\n");

  /* initializes elements of array A */
  A[0] = 3;
  A[1] = -5;
  A[2] = 1000;
  A[3] = 123;
  A[4] = 47;

  for (i = 0; i < 5; i++)
    printf("Value of A[%d] is %d.\n", i, A[i]);

  return 0;
}
