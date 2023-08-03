#include "main.h"
/**
 *  _strlen_recursion - a function that return length of string
 * @s : a pointer to the string to find it's length
 * Return:length of string
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s)
{
n++;
n += _strlen_recursion(s + 1);
}
return (n);
}
