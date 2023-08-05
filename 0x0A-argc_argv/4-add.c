#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i, n, len, digit;
i = 0;
n = 0;
len = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len)
{
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
n = n * 10 + digit;
if ((s[i + 1] < '0' || s[i + 1] > '9') && s[i + 1] != '\0')
return (-1);
}
else
return (-1);
i++;
}
return (n);
}

/**
 * main - entry point
 * @argc : vumber of arguments
 * @argv : 1-d array
 * Return: 0 always succes
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
int res = 0;
int i = 1;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (; i < argc ; i++)
{
if (_atoi(argv[i]) == -1)
{
printf("Error\n");
return (1);
}
res = res + _atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
