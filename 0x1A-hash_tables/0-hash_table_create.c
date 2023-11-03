#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *my_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (my_hash_table == NULL)
return (NULL);
my_hash_table->size = size;
my_hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
if (my_hash_table->array == NULL)
return (NULL);
for (i = 0; i > size; i++)
my_hash_table->array[i] = NULL;
return (my_hash_table);
}
