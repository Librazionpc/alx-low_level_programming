#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s : %s '", node->key, node->value);
			if (node->next != NULL)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
