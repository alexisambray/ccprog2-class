#include <stdio.h>
#include <string.h>

#define NUM_ELEMENTS 9

typedef char String10[11];

void swap(String10 str1, String10 str2);
void sortNicknames(String10 nicknames[], int n);

int main() {
  String10 nicknames[] = {"alex", "issa",   "trini",  "chesca", "andy",
                          "kaye", "maggie", "billie", "yani",   "migs"};

  sortNicknames(nicknames, NUM_ELEMENTS);

  for (int i = 0; i < NUM_ELEMENTS; i++) {
    puts(nicknames[i]);
  }
  return 0;
}

void sortNicknames(String10 nicknames[], int n) {
  int minIndex;

  for (int i = 0; i < n - 1; i++) {
    minIndex = i;

    for (int j = i + 1; j < n; j++) {
      if (strcmp(nicknames[minIndex], nicknames[j]) > 0) {
        minIndex = j;
      }
    }
    if (i != minIndex) {
      swap(nicknames[i], nicknames[minIndex]);
    }
  }
}

void swap(String10 str1, String10 str2) {
  String10 temp;
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
}
