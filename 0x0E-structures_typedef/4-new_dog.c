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
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int j = 0;
int i = 0;
while (*(src + i) != '\0')
{
i++;
}
for ( ; j < i ; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
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
dog_t *dog2 = malloc(sizeof(dog_t));
int len_name;
int len_owner;
if (dog2 == NULL)
return (NULL);
len_owner = _strlen(owner);
len_name = _strlen(name);
dog2->name = malloc(sizeof(char) * (len_name + 1));
if (dog2->name == NULL)
{
free(dog2->name);
free(dog2);
return (NULL);
}
dog2->age = age;
dog2->owner = malloc(sizeof(char) * (len_owner + 1));
if (dog2->owner == NULL)
{
free(dog2->owner);
free(dog2);
return (NULL);
}
_strcpy(dog2->name, name);
_strcpy(dog2->owner, owner);
return (dog2);
}
