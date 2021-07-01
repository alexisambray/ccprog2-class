/* Listing 1.11: Input array elements in another function */

#include <stdio.h>

void input2DArray(int table[][3]) {
  int i; /* row index */
  int j; /* column index */

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("Input element %d, %d: ", i, j);
      scanf("%d", &table[i][j]);
    }
    printf("\n");
  }
}

void output2DArray(int table[][3]) {
  int i; /* row index */
  int j; /* column index */

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++)
      printf("%d", table[i][j]);

    printf("\n");
  }
}

int main() {
  int table[2][3];

  input2DArray(table);
  output2DArray(table);

  return 0;
}
