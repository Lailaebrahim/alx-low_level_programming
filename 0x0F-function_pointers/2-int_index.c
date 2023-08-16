#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int ret = 0;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0 ; i < size ; i++)
{
ret = cmp(array[i]);
if (ret == 0)
return (array[i]);
}
return (-1);
}
