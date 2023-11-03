#include "shell.h"

int main() {
  const char *delimiters = " ";
  int num_tokens;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  int n = 0;
  read = _getline(&line, &len, STDIN_FILENO);
  printf("Line (%lu characters): %s\n", (size_t)read, line);
  char *str = "laila ebrahim tawfik";	  
  char **tokens = __strtok(str, delimiters);

  if (tokens != NULL) {
    for (int i = 0; tokens[i] != NULL; i++) {
      printf("Token %d: %s\n", i + 1, tokens[i]);
      
    }
    } else {
    printf("No tokens found.\n");
  }
  str = "hi lili";
  tokens = __strtok(str, delimiters);
  if (tokens != NULL) {
    for (int i = 0; tokens[i] != NULL; i++) {
      printf("Token %d: %s\n", i + 1, tokens[i]);

    }
  } else {
    printf("No tokens found.\n");
  }
  
  return 0;
}
