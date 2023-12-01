#include "hash_tables.h"
/**
 * hash_table_print - print hash table.
 * @ht: hast table to print.
 *
 * Return: Pointer to the resulting string (dest).
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tp;
	char lap = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		tp = ht->array[i];
		while (tp != NULL)
		{
			if (lap == 1)
				printf(", ");
			printf("'%s': '%s'", tp->key, tp->value);
			lap = 1;
			tp = tp->next;
		}
	}
	printf("}\n");
}
