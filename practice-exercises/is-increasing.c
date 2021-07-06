/* This program returns 1 if array is increasing, otherwise, 0 */

#include <stdio.h>

int IsIncreasingOrder(int A[], int n) {
  int i;

  for (i = 0; i <= n - 2; i++) {
    if (A[i] > A[i + 1])
      return 0;
  }
  return 1;
}

int main() {
  int nums[] = {5, 3, 2, 1, 0, -22, -30, -50};

  printf("%d", IsIncreasingOrder(nums, 5));
}
