#include "lists.h"
/**
 * list_len - Liagh of linked list.
 * @h: points to first node.
 *
 * Return: The number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
