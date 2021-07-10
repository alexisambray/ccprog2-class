/* This is an example of a program that prints a COM PRO in a 2D arra y*/

#include <stdio.h>

int main() {
  char C[2][3];

  // row 0 elements
  C[0][0] = 'C';
  C[0][1] = 'O';
  C[0][2] = 'M';
  // row 1 elements
  C[1][0] = 'P';
  C[1][1] = 'R';
  C[1][2] = 'O';

  // print elements in row major order
  int row;
  int column;
  for (row = 0; row < 2; row++) {
    for (column = 0; column < 3; column++)
      printf("%c", C[row][column]);
    printf("\n");
  }
}
