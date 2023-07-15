#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int j = 49;
while (i <= 56)
{/*to print alphapets use a while loop to loop over the ascii
  *value of each alphabet and use putchar to print
  *alpabet using it is ascii
  *corresponding value
  *use nested loop one for the first digit and the other for second
  */
while (j <= 57)
{
putchar (i);
putchar (j);
if (i <= 56 && j <= 56)
{
putchar (',');
putchar (' ');
}
j++;
}
i++;
j = 49;
}
putchar ('\n');
return (0);
}
