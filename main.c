#include <stdio.h>
#include <stdlib.h>

// Custom function to check if a character is a delimiter
int isDelimiter(char c, const char *delimiters) {
  while (*delimiters) {
    if (*delimiters == c) {
      return 1;
    }
    delimiters++;
  }
  return 0;
}

// Custom strlen function
size_t custom_strlen(const char *str) {
  size_t len = 0;
  while (str[len]) {
    len++;
  }
  return len;
}

// Custom strncpy function
char *custom_strncpy(char *dest, const char *src, size_t n) {
  char *original_dest = dest;
  while (*src && n) {
    *dest++ = *src++;
    n--;
  }
  while (n) {
    *dest++ = '\0';
    n--;
  }
  return original_dest;
}

// Custom tokenization function
char **custom_tokenizer(const char *str, const char *delimiters, int *num_tokens) {
  if (str == NULL || delimiters == NULL) {
    return NULL;
  }

  // Count the number of tokens
  *num_tokens = 0;
  const char *token_start = str;
  while (*token_start) {
    // Skip leading delimiters
    while (*token_start && isDelimiter(*token_start, delimiters)) {
      token_start++;
    }
    if (*token_start) {
      (*num_tokens)++;
    }
    // Find the end of the current token
    while (*token_start && !isDelimiter(*token_start, delimiters)) {
      token_start++;
    }
  }

  if (*num_tokens == 0) {
    return NULL;
  }

  // Allocate memory for the array of pointers to tokens
  char **tokens = (char **)malloc((*num_tokens + 1) * sizeof(char *));
  if (tokens == NULL) {
    return NULL;
  }

  // Tokenize the input string
  int token_index = 0;
  token_start = str;
  while (*token_start) {
    // Skip leading delimiters
    while (*token_start && isDelimiter(*token_start, delimiters)) {
      token_start++;
    }
    if (*token_start) {
      const char *token_end = token_start;
      // Find the end of the current token
      while (*token_end && !isDelimiter(*token_end, delimiters)) {
	token_end++;
      }
      // Calculate the length of the token
      size_t token_length = token_end - token_start;
      // Allocate memory for the token
      tokens[token_index] = (char *)malloc(token_length + 1);
      if (tokens[token_index] == NULL) {
	// Memory allocation failed
	for (int i = 0; i < token_index; i++) {
	  free(tokens[i]);
	}
	free(tokens);
	return NULL;
      }
      // Copy the token
      custom_strncpy(tokens[token_index], token_start, token_length);
      token_index++;
      token_start = token_end;
    }
  }

  tokens[*num_tokens] = NULL; // Null-terminate the array
  return tokens;
}

int main() {
  const char *delimiters = " ";
  int num_tokens;

  char input[100];
  printf("Enter a line of text: ");
  fgets(input, sizeof(input), stdin);
  input[custom_strlen(input) - 1] = '\0'; // Remove the newline character

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
