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
{/*to print alphapets use a while loop to loop over the ascii
  *value of each alphabet and use putchar to print
  *alpabet using it is ascii
  *corresponding value
  */
putchar (i);
if (i < 57)
{
putchar (',');
putchar (' ');
}
i++;
}
putchar ('\n');
return (0);
}
