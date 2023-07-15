#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
      /* this condition check if the number is less than 0 so it is negative */
printf("%d is negative\n", n);
}
else if (n > 0)
{
      /* this condition check if the number is more than 0 so it is positive */
printf("%d is positive\n", n);
}
else
{
      /*else case is the number is not negative or positive it is equal zero */
printf("%d is zero\n", n);
}
return (0);
}
