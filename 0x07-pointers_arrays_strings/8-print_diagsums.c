#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int sum_1 = 0, sum_2 = 0, y;
for (y = 0; y < size; y++)
{
sum_1 = sum_1 + a[y * size + y];
}
for (y = size - 1; y >= 0; y--)
{
sum_2 += a[y * size + (size - y - 1)];
}
printf("%d, %d\n", sum_1, sum_2);
}
