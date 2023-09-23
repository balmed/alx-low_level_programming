#include "lists.h"

/**
 * _strlen - reteurn the length of a string.
 * @s: Pointer the string
 *
 * Return: return int.
 */
int _strlen(char *s)
{
	int t = 0;

	if (!s)
		return (0);
	while (*s++)
		t++;
	return (t);
}

/**
 * print_list - Prints linked lists.
 * @h: Points to first node.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
