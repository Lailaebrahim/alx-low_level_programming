#include "shell.h"

int main() {
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  char *delimiters = " ";
  int i;

  printf("Enter lines of text (Ctrl+D to end):\n");

  while ((read = _getline(&line, &len, fileno(stdin))) != -1) {
    // Remove the newline character if it exists
    if (line[read - 1] == '\n') {
      line[read - 1] = '\0';
      read--; // Update the length
    }

    printf("Line (%lu characters): %s\n", (size_t)read, line);

    // Check for empty lines
    if (line[0] == '\0') {
      continue;
    }

    // Tokenize the input manually
    char *token;
    char *saveptr;
    i = 0;
    token = strtok_r(line, delimiters, &saveptr);
    while (token != NULL) {
      printf("Token %d: %s\n", i + 1, token);
      i++;
      token = strtok_r(NULL, delimiters, &saveptr);
    }
  }

  free(line);
  return 0;
}
