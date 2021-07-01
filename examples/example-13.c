/* Listing 1.13: Straight selection sort */

#include <stdio.h>

void swap(int* px, int* py) {
  int temp;

  temp = *px;
  *px = *py;
  *py = temp;
}

void sort(int A[], int n) {
  int i;
  int j;
  int min; /* index of the smallest value */

  for (i = 0; i < n - 1; i++) { /* note: n - 1 steps only */
    min = i;
    for (j = i + 1; j < n; j++) {
      if (A[min] > A[j])
        min = j;
    }
    swap(&A[i], &A[min]);
  }
}

void output1DArray(int A[], int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("%d\n", A[i]);
}

int main() {
  int A[5] = {40, 20, 30, 50, 10};

  printf("Array before sorting: \n");
  output1DArray(A, 5);

  sort(A, 5); /* sort the array elements */
  printf("\n");
  printf("Array after sorting: \n");
  output1DArray(A, 5);

  return 0;
}
