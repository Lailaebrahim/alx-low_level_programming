#include "shell.h"
/**
 * isDelimiter - helper function to detect a delimiter is encountered
 * @c : char to check
 * @delimiters: delimiter to be detected
 * Return: 1 if delimiter is encountered
 *         -1 if not
 */
int isDelimiter(char c, const char *delimiters)
{
  while (*delimiters)
    {
      if (*delimiters == c)
	{
	  return (1);
	}
      delimiters++;
    }
  return (0);
}
/**
 * _strtok - Token A String Into Token (strtrok)
 * @str: String
 * @delim: Delimiter
 * Return: Pointer To The Next Token Or NULL
 */
char *_strtok(char *str, const char *delim)
{
  static char *ts;
  static char *nt;
  unsigned int i;

  if (str != NULL)
    nt = str;
  ts = nt;
  if (ts == NULL)
    return (NULL);
  for (i = 0; ts[i] != '\0'; i++)
    {
      if (isDelimiter(ts[i], delim) == 0)
	break;
    }
  if (nt[i] == '\0' || nt[i] == '#')
    {
      nt = NULL;
      return (NULL);
    }
  ts = nt + i;
  nt = ts;
  for (i = 0; nt[i] != '\0'; i++)
    {
      if (isDelimiter(nt[i], delim) == 1)
	break;
    }
  if (nt[i] == '\0')
    nt = NULL;
  else
    {
      nt[i] = '\0';
      nt = nt + i + 1;
      if (*nt == '\0')
	nt = NULL;
    }
  return (ts);
}
/**
 * parse_cmd - Parse Line Of Input
 * @input:User Input To Parse
 * Return: Array Of Char (Parsed):Simple Shell
 */
char **parse_cmd(char *input)
{
  char **tokens;
  char *token;
  int i, buffsize = BUFSIZE;

  if (input == NULL)
    return (NULL);
  tokens = malloc(sizeof(char *) * buffsize);
  if (!tokens)
    {
      perror("hsh");
      return (NULL);
    }

  token = _strtok(input, "\n ");
  for (i = 0; token; i++)
    {
      tokens[i] = token;
      token = _strtok(NULL, "\n ");
    }
  tokens[i] = NULL;

  return (tokens);
}
