/* Listing 1.10: 2D array and parameter passing */

#include <stdio.h>

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
  int table[2][3] = {{50, 19, 48}, {35, 64, 70}};

  output2DArray(table);
  return 0;
}
