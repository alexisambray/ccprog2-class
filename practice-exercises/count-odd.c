/* This program returns how many odd numbers there are in an array */

#include <stdio.h>

int CountOdd(int A[], int n) {
  int i;
  int odd = 0;

  for (i = 0; i < n; i++)
    if (A[i] % 2 != 0)
      odd++;

  return odd;
}

int main() {
  int A[5] = {2, 3, 4, 5, 6};

  printf("There are %d odd numbers.", CountOdd(A, 5));

  return 0;
}
