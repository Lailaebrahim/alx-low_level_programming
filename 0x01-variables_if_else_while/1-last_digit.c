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
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10; /*to get last digit */
if (x < 6 && x != 0)
{
      /* this condition check if the number is less than 0 so it is negative */
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
else if (x > 5)
{
      /* this condition check if the number is more than 0 so it is positive */
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else
{
      /*else case is the number is not negative or positive it is equal zero */
printf("Last digit of %d is %d and is 0\n", n, x);
}
return (0);
}
