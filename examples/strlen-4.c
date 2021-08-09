#include <stdio.h>
#include <string.h>

int main() {
  char data[21];
  int i;
  int len;

  printf("Input a string (max. of 20 chars.): ");
  scanf("%20s", data);

  len = strlen(data);
  for (i = 0; i < len; i++)
    printf("data [%d] = %c\n", i, data[i]);

  return 0;
}
