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
char *value_cp = NULL;
if (ht == NULL || key == NULL || value == NULL || *key == '\0')
return (0);
index = key_index((const unsigned char *)key, ht->size);
value_cp = strdup(value);
if (value_cp == NULL)
return (0);
if (ht->array[index] != NULL)
{
new_node = ht->array[index];
while (new_node != NULL)
{
if (strcmp(ht->array[index]->key, key) == 0)
{
free(ht->array[index]->value);
ht->array[index]->value = value_cp;
return (1);
}
new_node = new_node->next; }}
else
{
new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (!new_node)
{
free(value_cp);
return (0); }
new_node->key = strdup(key);
ht->array[index]->value = value_cp;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
return (0);
}
