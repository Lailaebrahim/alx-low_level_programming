#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\n' ||  str[i] == ',' ||  str[i] == ';'
||  str[i] == '!' || str[i] == '?' ||  str[i] == '"' ||  str[i] == ')'
||  str[i] == '(' ||  str[i] == '}' || str[i] == '{' ||  str[i] == '\t')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;
}
else
{
}
i++;
}
return (str);
}
