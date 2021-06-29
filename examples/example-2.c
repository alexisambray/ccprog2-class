/* Listing 1.2: Initializing elements to zero */

#include <stdio.h>
int main() {
  int A[5]; /* integer array A with size of 5 */
  int i;    /* i will be used as array index */

  /* initialize all array elements to zero */
  for (i = 0; i < 5; i++)
    A[i] = 0;
  /* print the array element values */
  for (i = 0; i < 5; i++)
    printf("Value of A[%d] is %d\n", i, A[i]);

  return 0;
}
