// examle: 1D array of strings
#include <stdio.h>
#include <string.h>

#define MAX 5
typedef char Str30[31];

int main() {
  Str30 S[MAX];
  int i;

  for (i = 0; i < MAX; i++)
    scanf("%s", S[i]);
  for (i = 0; i < MAX; i++)
    printf("%s\n", S[i]);

  return 0;
}
