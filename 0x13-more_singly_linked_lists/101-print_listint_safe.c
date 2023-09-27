#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * Rev_s - location memory for an array.
 * @list: the old list.
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to the new list.
 */
const listint_t **Rev_s(const listint_t **list,
		size_t size, const listint_t *new)
{
	const listint_t **nlist;
	size_t i;

	nlist = malloc(size * sizeof(listint_t));
	if (nlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0 ; i < size - 1 ; i++)
		nlist[i] = list[i];
	nlist[i] = new;
	free(list);
	return (nlist);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0 ; i < num ; i++)
		{
			if (head == list[i])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = Rev_s(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
