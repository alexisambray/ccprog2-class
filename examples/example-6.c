/* Listing 1.6: Display array element addresses using arithmetic */

#include <stdio.h>

int main() {
  int A[5];
  int i;
  for (i = 0; i < 5; i++)
    printf("Address of A[%d] is %p\n", i, A + i);

  return 0;
}
