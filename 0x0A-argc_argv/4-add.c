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
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
return (-1);
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
else
return (-1);
i++;
}

if (f == 0)
return (0);
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
