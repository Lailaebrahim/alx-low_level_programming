#include "shell.h"

char **tokenizeString(const char *str, const char *delimiters, int *num_tokens) {
  char **tokens = NULL;
  char *token = NULL;
  int token_count = 0;

  // Create a copy of the input string to avoid modifying the original
  char *str_copy = _strdup(str);
  if (str_copy == NULL) {
    perror("strdup");
    return NULL;
  }

  // Initialize strtok with the copy
  token = strtok(str_copy, delimiters);
  while (token != NULL) {
    // Allocate memory for the token array
    char **new_tokens = (char **)_realloc(tokens, 0 ,(token_count + 1) * sizeof(char *));
    if (new_tokens == NULL) {
      perror("realloc");
      free(str_copy);
      for (int i = 0; i < token_count; i++) {
	free(tokens[i]);
      }
      free(tokens);
      return NULL;
    }
    tokens = new_tokens;

    // Allocate memory for the token string and copy it
    tokens[token_count] = _strdup(token);
    if (tokens[token_count] == NULL) {
      perror("strdup");
      free(str_copy);
      for (int i = 0; i <= token_count; i++) {
	free(tokens[i]);
      }
      free(tokens);
      return NULL;
    }

    token_count++;

    // Get the next token
    token = strtok(NULL, delimiters);
  }

  free(str_copy);
  *num_tokens = token_count;
  return tokens;
}

int main() {
  char *input = NULL;
  const char *delimiters = " ,"; // Space and comma are delimiters
  int num_tokens = 0;
  size_t n = 0;
  ssize_t ret = _getline(&input, &n, STDIN_FILENO);
  
  char **tokens = tokenizeString(input, delimiters, &num_tokens);
  if (tokens != NULL) {
    for (int i = 0; i < num_tokens; i++) {
      printf("Token %d: %s\n", i + 1, tokens[i]);
      free(tokens[i]);
    }
    free(tokens);
  } else {
    printf("Tokenization failed.\n");
  }
  free(input);
  return 0;
}
