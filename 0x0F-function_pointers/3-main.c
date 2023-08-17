#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
int sign = 1, i = 0;
unsigned int res = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
res = (res * 10) + (s[i] - '0');
i++;
}
res *= sign;
return (res);
}

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int num_1 = _atoi(argv[1]);
int num_2 = _atoi(argv[3]);
char *op = argv[2];
int (*func_ptr)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (*op != '+' && *op !='-' && *op != '/' &&
*op != '%' && *op != '*')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num_2 == 0) ||
(*op == '%' && num_2 == 0))
{
printf("Error\n");
exit(100);
}
func_ptr = get_op_func(op);
printf("%d\n", (*func_ptr)(num_1, num_2));
return (0);
}
