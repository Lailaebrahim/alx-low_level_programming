#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int num_1 = atoi(argv[1]);
int num_2 = atoi(argv[3]);
char *op = argv[2];
int (*func_ptr)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (*op != '+' && *op != '-' && *op != '/' &&
*op != '%' && *op != '*' && (get_op_func(op) == NULL || op[1] != '\0'))
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
