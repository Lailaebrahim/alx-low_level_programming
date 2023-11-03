#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *temp = NULL;
if (ht == NULL)
return;
printf("{");
for (; i < ((ht->size) - 1) ; i++)
{
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
temp = ht->array[i];
while(temp != NULL)
{
printf("'%s': '%s'", temp->key, temp->value);
temp = temp->next; 
}
}
printf("}");
}
