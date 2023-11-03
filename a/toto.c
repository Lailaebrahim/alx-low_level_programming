#include <stdio.h>
#include <stdlib.h>

// Your _realloc function here


int main() {
  // Initial allocation of memory
  int *arr = (int *)malloc(5 * sizeof(int));
  if (arr == NULL) {
    fprintf(stderr, "Memory allocation failed.\n");
    return 1;
  }

  // Initialize the array
  for (int i = 0; i < 5; i++) {
    arr[i] = i;
  }

  // Print the original array
  printf("Original Array: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Resize the array using _realloc
  arr = (int *)_realloc(arr, 5 * sizeof(int), 10 * sizeof(int));
  if (arr == NULL) {
    fprintf(stderr, "Memory reallocation failed.\n");
    return 1;
  }

  // Initialize the additional elements
  for (int i = 5; i < 10; i++) {
    arr[i] = i;
  }

  // Print the resized array
  printf("Resized Array: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Free the allocated memory
  free(arr);

  return 0;
}
