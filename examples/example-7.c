/* Listing 1.7: Access array elements via dereference operator */

#include <stdio.h>

int main() {
  int A[5];
  int i;

  /* initialize array elements */
  for (i = 0; i < 5; i++)
    *(A + i) = (i + 1) * 5;

  for (i = 0; i < 5; i++)
    printf("A[%d] = %d\n", i, *(A + 1));

  return 0;
}
