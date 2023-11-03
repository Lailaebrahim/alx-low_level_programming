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
int i = 0;
if (ht == NULL || key == NULL || value == NULL || *key == '\0')
return (0);
value_cp = strdup(value);
if (value_cp == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for(i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_cp;
return (1);
}
}
new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_cp);
return (0); }
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(value_cp);
return (0); }
ht->array[index]->value = value_cp;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
