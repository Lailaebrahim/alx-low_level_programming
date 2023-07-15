#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
while (i <= 57)
{/*to print single digit of HEX use a while loop to loop over the ascii
  *value of digits from 0 to 9 and use putchar to print
  *digit using it is ascii
  *corresponding value
  */
putchar (i);
i++;
}
i = 97;
while (i <= 122)
{
putchar (i);
i++;
}
putchar ('\n');
return (0);
}
