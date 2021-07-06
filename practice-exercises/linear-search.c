#include <stdio.h>

int LinearSearch(int key, int A[], int n) {
  int i;

  for (i = n - 1; i >= 0; i--) {
    if (key == A[i])
      return i;
  }
  return -1;
}

int main() {
  int nums[] = {8, 15, 25, 30, 50, 38, 22, 10, 38, 2};

  printf("%d", LinearSearch(22, nums, 10));
}
