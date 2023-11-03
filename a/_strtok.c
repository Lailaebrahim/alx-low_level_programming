#include "shell.h"

/**
 * __strtok - function that take a string to toknize it
 * @str: string to be tokenized
 * @delimiters: delimiter
 * Return: an array of pointers to tokens
 */
char **__strtok(char *str, const char *delimiters)
{
char *token = NULL;
char *str_copy = NULL;
size_t tokens_count = 0;
int token_index = 0, i = 0, token_length;
char **tokens;
if (str == NULL || delimiters == NULL)
return (NULL);
 str_copy = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
_strcpy(str_copy, str);
if (str_copy == NULL)
return (NULL);
token = strtok(str, delimiters);
while (token != NULL)
{
(tokens_count)++;
token = strtok(NULL, delimiters);
}
tokens = (char **)malloc((tokens_count + 1) * sizeof(char *));
if (tokens == NULL)
{
free(str_copy);    
return (NULL);
}
token = strtok(str_copy, delimiters);
while (token != NULL)
{
tokens[token_index] =   (char *)malloc(_strlen(token) + 1);
if (tokens[token_index] == NULL)
{
for (i = 0; i < token_index; i++)
free(tokens[i]);
free(tokens);
free(str_copy);
return (NULL);
}
_strcpy(tokens[token_index], token);
token_index++;
token = strtok(NULL, delimiters);
}
tokens[token_index] = NULL;
free(str_copy);
return (tokens);
}
