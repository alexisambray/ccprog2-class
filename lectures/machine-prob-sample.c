/*
  Example of reading and storing a set of strings from an input file to a 1D
  array of strings.
*/
#include <stdio.h>
#include <string.h>

typedef char String[6];

void InputArrayString(String S[]) {
  int i;
  String temp;  // temporary string
  // Input loop
  for (i = 0; i < 5; i++) {
    scanf("%s", temp);   // input a string
    strcpy(S[i], temp);  // copy into an array element
  }
}

void OutputArrayString(String S[]) {
  int i;
  printf("The array elements are: \n");
  // Output loop to print the 1D array elements
  for (i = 0; i < 5; i++) {
    printf("%s\n", S[i]);
  }
}

int main() {
  String S[5];  // 1D array of string

  InputArrayString(S);
  OutputArrayString(S);

  return 0;
}
