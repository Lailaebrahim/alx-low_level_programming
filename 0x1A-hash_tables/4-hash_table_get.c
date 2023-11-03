#include "hash_tables.h"
/**
 * hash_table_get -  function that retrieves a value associated with a key.
 * @ht: pointer to hash table.
 * @key: key to find it's value.
 * Return:the value associated with the element,
 * or NULL if key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *temp = NULL;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
if (strcmp(ht->array[index]->key, key) != 0)
{
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
return (temp->value);
temp = temp->next;
}
}
else if (strcmp(ht->array[index]->key, key) == 0)
{
return (ht->array[index]->value);
}
return (NULL);
}
