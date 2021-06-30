/* This program has a function that will print the elements of the array in
   reversed sequence, from the last element down to the first element. */

#include <stdio.h>

void inputElements(int A[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("Input the value of element %d: ", i);
    scanf("%d", &A[i]);
  }
}

void reservedPrintElements(int A[], int n) {
  int i;

  for (i = n - 1; i >= 0; i--)
    printf("Value of element %d = %d.\n", i, A[i]);
}

int main() {
  int A[5];

  inputElements(A, 5);
  reservedPrintElements(A, 5);

  return 0;
}
