/*
         Search algorithm implementation in C -- with strings!
*/
#include <stdio.h>
#include <string.h>

typedef char String[20];

// return the index when key is found, otherwise return -1
int LinearSearch(String key, String A[], int n) {
  int i;

  for (i = 0; i < n; i++)
    // if (key == A[i])  // Success: Eureka!  (I found it!)
    // NOTE: string comparisons cannot be done with relational operators
    //       >, <, ==, >=, <=, !=
    if (strcmp(key, A[i]) == 0)  // BE CAREFUL with strings as keys
      return i;

  return -1;  // Fail: not found
}

int main() {
  String A[8] = {"DOG",   "ELEPHANT", "CAT",  "CRAB",
                 "ZEBRA", "MOUSE",    "GOAT", "RABBIT"};
  String key;

  int index;

  printf("Input a key value: ");
  scanf("%s", key);  // be careful! no & with array names

  index = LinearSearch(key, A, 8);
  printf("index = %d\n", index);

  return 0;
}
