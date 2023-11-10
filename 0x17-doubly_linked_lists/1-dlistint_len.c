#include "lists.h"

/**
 * dlistint_len -print numbre of list.
 * @h: pointer of head node
 *
 * Return: size of list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
