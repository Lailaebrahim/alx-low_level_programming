#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to hash table.
 * @key: New key to be added to table.
 * @value: Value mapped to key.
 * Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *new_node = NULL;
if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
return (0);
unsigned char *_key_ = NULL;
strcpy(_key_, key);
index = key_index(_key_, ht->size);
if (ht->array[index] != NULL)
{
if (strcmp(ht->array[index]->key, key) == 0)
{
(ht->array[index])->value = value;
return (0);
}
else
{
new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (!new_node)
{
return (0);
}
strcpy(new_node->key, key);
strcpy(new_node->value, value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
}
else
{
new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (!new_node)
{
return (0);
}
strcpy(new_node->key, key);
strcpy(ht->array[index]->value, value);
ht->array[index]->next = NULL;
return (1);
}
}
