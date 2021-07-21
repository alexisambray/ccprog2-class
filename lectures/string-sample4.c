/*
    Example of 1D array of strings.
*/
#include <stdio.h>
#include <string.h>
typedef char String[6];

int main() {
  int i;
  String S[5];  // 1D array of 5 strings

  strcpy(S[0], "ANT");  // strcpy() copies "ANT" as the value of S[0]
  strcpy(S[1], "CAT");
  strcpy(S[2], "DOG");
  strcpy(S[3], "OWL");
  strcpy(S[4], "ZEBRA");

  // print the array elements
  for (i = 0; i < 5; i++)
    printf("%s\n", S[i]);

  return 0;
}
