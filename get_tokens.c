#include "shell.h"
int isDelimiter(char c, const char *delimiters)
{
while (*delimiters != '\0')
{
if (c == *delimiters)
return (1);
delimiters++;
}
return (0);
}

// Function to extract a single token from the input string
char *getToken(const char **str, const char *delimiters) {
const char *token_start = *str, *token_end = NULL;
char *token = NULL;
size_t token_length = 0;
size_t i = 0;

/*  Skip leading delimiters */
while (isDelimiter(**str, delimiters))
(*str)++;
/*End of string*/
if (**str == '\0')
return (NULL);

token_start = *str;

/*Find the end of the token*/
while (**str && !isDelimiter(**str, delimiters))
(*str)++;

token_end = *str;
token_length = token_end - token_start;

token = (char *)malloc(token_length + 1);
if (token == NULL)
return (NULL);

/*Copy the token characters manually*/
for (i = 0; i < token_length; i++)
token[i] = token_start[i];

token[token_length] = '\0';
return (token);
}

// Function to tokenize the input string and return an array of tokenized strings
char **tokenizeString(const char *str, const char *delimiters, int *num_tokens) {
const char *input = str;
char *token = NULL;
int token_index = 0;
int j = 0, i = 0;
*num_tokens = 0;
if(str == NULL || delimiters == NULL)
return(NULL);
/* Count the number of tokens*/
while (*input)
{
while (*input && isDelimiter(*input, delimiters))
input++;
if (*input)
(*num_tokens)++;
while (*input && !isDelimiter(*input, delimiters))
input++;
}

if (*num_tokens == 0)
{return (NULL); }

char **tokens = (char **)malloc((*num_tokens + 1) * sizeof(char *));
if (tokens == NULL)
{return (NULL); }

input = str;
/*Tokenize the string*/
for( j = 0 ; j < *num_tokens ; j++)
{
token = getToken(&input, delimiters);
if (token == NULL)
{for (i = 0 ; i < token_index; i++)
free(tokens[i]);
free(tokens);
return (NULL); }
tokens[token_index++] = token;
}

tokens[*num_tokens] = NULL;
return (tokens);
}
