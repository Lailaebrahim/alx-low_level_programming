#include "main.h"
/**
 * print_alphabet -a function that prints the alphabet, in lowercase
 * followed by a new line.
 * Return: No return
 */
void print_alphabet(void)
{
int i = 97;
while (i <= 122)
{   /*to print alphapets use a while loop to loop over the ascii
	       *value of each alphabet and use putchar to print
	       *alpabet using it is ascii
	       *corresponding value
	       */
_putchar(i);
i++;
}
_putchar('\n');
}
