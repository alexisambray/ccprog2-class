/* Listing 2.9: Array of strings example program 2 */
#include <stdio.h>

typedef char String10[11];

void InputNicknames(String10 friends[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("Input the nickname of your friend: ");
    scanf("%s", friends[i]);
  }
}

void PrintNicknames(String10 friends[], int n) {
  int i;

  printf("The nicknames of your friends are:\n");

  for (i = 0; i < n; i++) {
    printf("%s\n", friends[i]);
  }
}

int main() {
  String10 friends[5];

  InputNicknames(friends, 5);
  PrintNicknames(friends, 5);

  return 0;
}
