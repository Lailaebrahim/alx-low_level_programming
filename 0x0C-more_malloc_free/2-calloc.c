#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr = NULL;
if (size == 0 || nmemb == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
for (i = 0; i < (nmemb * size) ; i++)
ptr[i] = 0;
return (ptr);
}
