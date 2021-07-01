/* Wite a function which will determine and return the largest element in Array
 * A */

#include <stdio.h>

int maximum(int A[], int n) {
  int i;
  int max = A[0];

  for (i = 1; i < n; i++) {
    if (A[i] > max) {
      max = A[i];
    }
  }
  return max;
}

int main() {
  int nums[] = {7, 6, 3, 8, 9};

  printf("%d", maximum(nums, 5));
  return 0;
}
