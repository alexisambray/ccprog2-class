/* Listing 1.5: Display array element addresses using & */

#include <stdio.h>

int main() {
  int A[5];
  int i;

  for (i = 0; i < 5; i++)
    printf("Adress of A[%d] is %p\n", i, &A[i]);

  return 0;
}
