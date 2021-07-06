/* This returns the average of the numbers in an array */

#include <stdio.h>

float Average(int A[], int n)

{
  int i;
  double sum;

  for (i = 0; i < n; i++) {
    sum += A[i];
  }

  return sum / n;
}

int main() {
  int A[5] = {15, 12, 18, 5, 8};

  printf("Average is %.2f", Average(A, 5));

  return 0;
}
