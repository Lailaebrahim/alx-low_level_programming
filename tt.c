#include "shell.h"
int main() {
  const char *delimiters = " ";
  int num_tokens;

  char input[100];
  printf("Enter a line of text: ");
  
  char **tokens = custom_tokenizer(input, delimiters, &num_tokens);

  if (tokens != NULL) {
    for (int i = 0; i < num_tokens; i++) {
      printf("Token %d: %s\n", i + 1, tokens[i]);
      free(tokens[i]); // Free each token after printing
    }
    free(tokens); // Free the array of tokens
  } else {
    printf("No tokens found.\n");
  }

  return 0;
}
