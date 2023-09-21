#include <lists.h>

/**
 * print_list - prints linked lists.
 * @h: points to first node.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s/n", strlen(h->str)), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
