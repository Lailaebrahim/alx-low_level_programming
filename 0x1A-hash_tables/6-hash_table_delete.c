#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp1 = NULL, *temp2 = NULL;
hash_table_t *table = ht;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
temp1 = ht->array[i];
if (temp1 != NULL)
{
temp2 = temp1->next;
free(temp1->value);
free(temp2->key);
free(temp1);
temp1 = temp2;
}
}
free(table->array);
free(table);
}
