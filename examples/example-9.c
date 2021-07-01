/* Listing 1.9: Accessing 2D array elements */

#include <stdio.h>

int main() {
  int table[2][3] = {{50, 19, 48}, {35, 64, 70}};
  int row; /* row index */
  int col; /* column index */

  /* print elements of array named as Table */
  /* note that a double loop if commonly used when accessing elements of a 2D
   * array */
  for (row = 0; row < 2; row++) {
    for (col = 0; col < 3; col++)
      printf("%d", table[row][col]);
    printf("\n");
  }
  return 0;
}
