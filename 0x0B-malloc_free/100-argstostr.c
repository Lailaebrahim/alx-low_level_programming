#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *arg, *str;
int i, j, k, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
str = av[i];
j = 0;

while (str[j++])
len++;
len++;
}

arg = (char *)malloc(sizeof(char) * (len + 1));
if (arg == NULL)
return (NULL);

for (i = 0, j = 0; i < ac && j < len; i++)
{
str = av[i];
k = 0;

while (str[k])
{
arg[j] = str[k];
k++;
j++;
}
arg[j++] = '\n';
}
arg[j] = '\0';

return (arg);
}
