/*
    typedef for string alias
*/
#include <stdio.h>

typedef char string[255];
typedef char Str[31];

int main() {
  string greetings = "Hello, how are you?";
  Str name;

  scanf("%s", name);
  printf("Hello %s. ", name);
  printf("%s\n", greetings);

  return 0;
}
