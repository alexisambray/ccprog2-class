/* This program returns how many uppercase letters there are in an array */

#include <ctype.h>
#include <stdio.h>

int CountUpper(char S[], int n) {
  int i;
  int numUpper;

  for (i = 0; i < n; i++) {
    if (isupper(S[i])) {
      numUpper++;
    }
  }
  return numUpper;
}

int main() {
  char S[7] = {'C', 'o', 'M', 'p', 'r', 'o', '2'};

  printf("\n%d", CountUpper(S, 7));
}
