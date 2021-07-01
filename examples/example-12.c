/* Listing 1.12: Access elements of one row only */

#include <stdio.h>

void outputRowElements(int table[][3], int row) {
  int col; /* column index */

  for (col = 0; col < 3; col++)
    printf("%d", table[row][col]);

  printf("\n");
}

int main() {
  int table[2][3] = {{50, 19, 48}, {35, 64, 70}};
  int row;

  /* can only input 0 or 1 for the row number */
  printf("Input row number of the elements you want to print: ");
  scanf("%d", &row);

  outputRowElements(table, row);

  return 0;
}
