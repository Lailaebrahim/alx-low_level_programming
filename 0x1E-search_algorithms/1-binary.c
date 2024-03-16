#include "search_algos.h"
/**
* binary_search - Searches for a value in an array
*                 of integers using binary search
*  @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, -1.
*         else, the first index where the value is located.
*
* Description: Prints a value every time it is compared in the array.
*/
int binary_search(int *array, size_t size, int value)
{
size_t l = 0, r = size - 1, i;
int m = 0;
if (array == NULL)
return (-1);
while(l <= r)
{
printf("Searching in array: ");
for (i = l; i < r; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
m = l + (r - l)/2;
if (array[m] == value)
return (m);
if (array[m] < value)
l = m + 1;
else
r = m - 1;
}
return (-1);
}
