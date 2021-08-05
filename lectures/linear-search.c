// Search algorithm implementation in C
#include <stdio.h>

int LinearSearch(int key, int A[], int n) {
  int i;

  for (i = 0; i < n; i++)
    if (key == A[i])  // Success: Eureka! (I found it!)
      return i;

  return -1;  // fail: not found
}

int main() {
  int A[8] = {10, 23, 11, 63, -55, 99, -20, 88};

  int index, key;

  printf("Input a key value: ");
  scanf("%d", &key);

  index = LinearSearch(key, A, 8);
  printf("index = %d\n", index);

  return 0;
}
