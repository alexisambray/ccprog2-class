// examle: 2D array of strings
#include <stdio.h>
#include <string.h>

#define ROW_SIZE 5
#define COL_SIZE 5

typedef char Str30[31];

int main() {
  Str30 M[ROW_SIZE][COL_SIZE];
  int i, j;

  // input 2D array elements
  for (i = 0; i < ROW_SIZE; i++)
    for (j = 0; j < COL_SIZE; j++)
      scanf("%s", M[i][j]);  // note: no &
  // other codes...
  return 0;
}
