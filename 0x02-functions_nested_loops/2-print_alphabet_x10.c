#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints the alphabet, in lowercase
 * followed by a new line 10 times.
 * Return: No return
 */
void print_alphabet_x10(void)
{/*to print alphapets use a while loop to loop over the ascii
  *value of each alphabet and use putchar to print
  *alpabet using it is ascii
  *corresponding value
  */
int i = 97;
int j = 0;
while (j < 10)
{
while (i <= 122)
{
_putchar (i);
i++;
}
_putchar ('\n');
j++;
}
}
