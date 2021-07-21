/* String program that returns true if a word is the same even if reversed */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(char* str) {
  for (int i = strlen(str) - 1, j = 0; i >= 0; i--, j++) {
    if (tolower(str[i]) != tolower(str[j])) {
      return false;
    }
  }
  return true;
}

int main() {
  char str[] = "Level";

  if (isPalindrome(str)) {
    printf("%s is a palindrome", str);
  } else {
    printf("%s is not a palindrome!", str);
  }

  return 0;
}
