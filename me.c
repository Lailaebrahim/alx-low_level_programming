#include "shell.h"

int main() {
  const char *original = "Hello, world!";
  char *duplicate = _strdup(original);

  if (duplicate != NULL) {
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    printf("Original len : %ld\n", _strlen(original));
    printf("Duplicate len: %ld\n", _strlen(duplicate));
    // Don't forget to free the duplicated string when you're done with it
    free(duplicate);
  } else {
    fprintf(stderr, "Memory allocation failed.\n");
  }

  return 0;
}
