#include <stdlib.h>
#include "dog.h"
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
dog2->name = name;
dog2->age = age;
dog2->owner = owner;
return (dog2);
}
