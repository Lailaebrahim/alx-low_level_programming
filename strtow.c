#include "shell.h"

char is_delim(char c, const char *delimiters)
{
  while (*delimiters)
    {
      if (*delimiters == c)
	return (1);
      delimiters++;
    }
  return (-1);
}
