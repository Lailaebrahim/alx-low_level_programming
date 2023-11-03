#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp = NULL;
unsigned char flag = 0;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < (ht->size); i++)
{
if (ht->array[i] != NULL)
{
if (flag == 1)
printf(", ");
temp = ht->array[i];
while(temp != NULL)
{
printf("'%s': '%s'", temp->key, temp->value);
temp = temp->next;
if (temp != NULL)
printf(", ");
}
flag = 1;
}
}
printf("}\n");
}
