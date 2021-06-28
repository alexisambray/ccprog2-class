/* Listing 1.4: 1D Array and Parameter Passing */

#include <stdio.h>

void inputElements(int A[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("Input the value of element %d: ", i);
    scanf("%d", &A[i]);
  }
}

void printElements(int A[], int n) {
  int i;

  for (i = 0; i < n; i++)
    printf("Value of element %d = %d.\n", i, A[i]);
}

int main() {
  int A[5];

  inputElements(A, 5);
  printElements(A, 5);

  return 0;
}
