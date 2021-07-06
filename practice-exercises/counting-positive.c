/* This program returns how many positive values there are in an array */

#include <stdio.h>

int CountPositive(int A[], int n) {
  int i;
  int pos = 0;

  for (i = 0; i < n; i++)
    if (A[i] > 0)
      pos++;

  return pos;
}

int main() {
  int A[5] = {15, 12, -18, 5, 8};

  printf("There are %d positive numbers.", CountPositive(A, 5));

  return 0;
}
