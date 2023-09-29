#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: numbre to index.
 * @index: bit to set.
 *
 * Return: 1 if success, -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = ((1L << index) | *n);
	return (1);
}
