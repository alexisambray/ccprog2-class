// strlen() example #2
#include <stdio.h>
#include <string.h>

int main() {
  char str[255] = "Is CCPROG2 easy or difficult?";
  int i, len;

  printf("%d\n", (int)strlen(str));

  scanf("%s", str);
  len = strlen(str);
  for (i = 0; i < len; i++)
    printf("str[%d] = %c\n", i, str[i]);

  return 0;
}
