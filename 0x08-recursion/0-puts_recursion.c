#include "main.h"
/**
 *  _puts_recursion - a function that prints a string, followed by a new line.
 * @s : a pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar ('\n');
return (void);
}
_putchar (*s);
return (_puts_recursion(*(s + 1)));
}
