#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 97;
while (i <= 122)
{/*to print alphapets use a while loop to loop over the ascii
  *value of each alphabet and use putchar to print
  *alpabet using it is ascii
  *corresponding value
  */
if (i == 101 || i == 113)
{
  /*do nothing */
}
else
{
putchar (i);
}
i++;
}
putchar ('\n');
return (0);
}
