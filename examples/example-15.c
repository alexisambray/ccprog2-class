/* This is an example of a program that scans and prints in 2D array */

#include <stdio.h>

#define NROWS 3
#define NCOLS 2

void InitializeMatrix(int A[][NCOLS]) {
  int i, j;

  for (i = 0; i < NROWS; i++)
    for (j = 0; j < NCOLS; j++)
      scanf("%d", &A[i][j]);
}

void PrintMatrix(int B[][NCOLS]) {
  int i, j;

  for (i = 0; i < NROWS; i++) {
    for (j = 0; j < NCOLS; j++)
      printf("%d", B[i][j]);

    printf("\n");
  }
}

int main() {
  int T[NROWS][NCOLS];

  InitializeMatrix(T);
  PrintMatrix(T);

  return 0;
}
