#include "lists.h"
/**
 * find_list - find a loop list.
 * @head: linked list to search.
 *
 * Return: address of node where loop s/r.
 */
listint_t *find_list(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next ; end != NULL ; end = end->next)
	{
		if (end == end->next)
			return (end);
	for (ptr = head ; ptr != end ; ptr = ptr->next)
		if (ptr == end->next)
			return (end->next);
	}
return (NULL);
}

/**
 * free_listint_safe - free lists with a loop.
 * @h: head of list.
 *
 * Return: the size of the list that was free.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *n_loop;
	size_t len;
	int p = 1;

	if (h == NULL || *h == NULL)
		return (0);
	n_loop = find_list(*h);
	for (len = 0 ; (*h != n_loop || p) && *h != NULL ; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == n_loop && p)
		{
			if (n_loop == n_loop->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			p = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
