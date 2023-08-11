#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2 : second string
 *@n : number of bytes to concatenate
 * Return: a pointer to the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i = 0, j = 0, k = 0;
if (s1 == NULL)
i = 0;
else
{
while (s1[i] != '\0')
i++;
}
if (s2 == NULL)
j = 0;
else
{
while (s2[j] != '\0')
j++;
}
if (n >= j)
n = j;
ptr = (malloc(sizeof(char) * (i + n + 1)));
if (ptr == NULL)
return (NULL);
else
{
while (k < i)
{
ptr[k] = s1[k];
k++;
}
while (k >= i && k < (n + i))
{
ptr[k] = s2[k - i];
k++;
}
}
ptr[k] = '\0';
return (ptr);
}
