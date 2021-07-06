/* This program converts lowercase letters to uppercase letters */

#include <ctype.h>
#include <stdio.h>

void ConvertUpper(char S[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    if (islower(S[i])) {
      S[i] = toupper(S[i]);
    }
  }
}

int main() {
  char S[7] = {'c', 'o', 'm', 'p', 'r', 'o', '2'};

  ConvertUpper(S, 7);
  int i;
  for (i = 0; i < 7; i++) {
    printf("%c", S[i]);
  }
}
