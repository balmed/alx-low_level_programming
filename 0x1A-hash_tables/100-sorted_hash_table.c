#include "hash_tables.h"
/**
 * shash_table_create - Create a hash table.
 * @size: size of the array.
 *
 * Return: Pointer to the resulting (hash table).
 */
hash_table_t *shash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;
	
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table = size;
	hash_table = NULL;
	hash_table = NULL;
	hash_table->array = malloc(size * sizeof(hash_table_t));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
/**
 * funt_shash_n - Create a new tables.
 * @key: the node of key.
 * @value: the node of value.
 *
 * Return: the new node; or NULL on failure.
 */
hash_node_t *funt_shash_n(const char *key, const char *value)
{
	hash_node_t *node;
	
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = node->snext = node->sprev = NULL;
	return (node);
}
/**
 * hash_table_set - set a kay a value the table.
 * @ht: hash table to add elemet.
 * @key: key for the data.
 * @value: data to store.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *new_value;
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = funt_shash_n(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	add_to_sorted_list(ht, hash_node);
	return (1);
}
/**
 * add_to_sorted_list - add the table.
 * @table: hash table to add elemet.
 * @node: key for the data.
 *
 * Return: empty
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tp;
	
	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tp = table->shead;
	while (tp != NULL)
	{
		if (strcmp(node->key, tp->key) < 0)
		{
			node->snext = tp;
			node->sprev = tp->sprev;
			tp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tp = tp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value and key.
 * @ht: hast table to print.
 * @key: key hast table
 *
 * Return: value and key, or NULL if key cannot be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tp;
	
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[i];
	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
			return (tp->value);
		tp = tp->next;
	}
	return (NULL);
}
/**
 * shash_table_print - print hash table.
 * @ht: hast table to print.
 *
 * Return: empty.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tp;
	char lap = 0;
	
	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tp = ht->shead;
	while (tp != NULL)
	{
		if (lap == 1)
			printf(", ");
		printf("'%s': '%s'", tp->key, tp->value);
		lap = 1;
		tp = tp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print hash table.
 * @ht: hast table to print.
 *
 * Return: empty
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	hash_node_t *tp;
	char lap = 0;
	
	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tp = ht->stail;
	while (tp != NULL)
	{
		if (lap == 1)
			printf(", ");
		printf("'%s': '%s'", tp->key, tp->value);
		lap = 1;
		tp = tp->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - retrieves a value and key.
 * @ht: hast table to print.
 *
 * Return: empty.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;
	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0 ; i < ht->size ; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
