#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
/**
 * _strncpy - concatenat a string
 * @dest : a pointer to the string to concatenate
 * @src : a pointer to the string to be concatenated to first string
 * @n : number of bytes to concatenate from src
 * Return: string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && dest[i] != '\0' && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t dog2 = malloc(sizeof(dog_t));
if (dog2 == NULL)
return (NULL);
int len_name = _strlen(name);
int len_owner = _strlen(owner);

dog2->name = malloc(sizeof(char) * (len_name + 1));
if (dog2->name == NULL)
return (NULL);
dog2->age = age;
dog2->owner = malloc(sizeof(char) * (len_owner + 1));
if (dog2->owner == NULL)
return (NULL);
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
return (dog2);
}
