// Search algorithm implementation in C
#include <stdio.h>

int BinarySearch(int key, int A[], int n) {
  int low = 0, high = n - 1, mid;
  int found = 0;

  while (!found && low <= high) {
    mid = low + (high - low) / 2;  // equivalent to (low + high) / 2 but safer,
                                   // avoid overflow error

    if (key == A[mid])  // Success, found the key
      found = 1;
    else if (key < A[mid])  // search the lower half (left half)
      high = mid - 1;
    else  // (key > A[mid]) // search the upper half (right half)
      low = mid + 1;
  }
  if (found)
    return mid;
  else
    return -1;  // else key NOT found
}

int main() {
  int A[8] = {-55, -20, 10, 11, 23, 63, 88, 99};  // must be sorted!

  int index, key;

  printf("Input a key value: ");
  scanf("%d", &key);

  index = BinarySearch(key, A, 8);
  printf("index = %d\n", index);

  return 0;
}
