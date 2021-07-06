/* This program finds the minimum number in an array */

#include <stdio.h>

#define SIZE 8

int Minimum(int A[], int n) {
  int i;
  int min = A[0];  // let the 1st element be the initial min

  // inspect the remaining array elements
  for (i = 0; i < n; i++)
    if (A[i] < min)
      min = A[i];

  return min;
}

int main() {
  int nums[SIZE] = {10, 23, 11, 63, -55, 99, -20, -88};

  printf("Minimum is %d", Minimum(nums, SIZE));

  return 0;
}
