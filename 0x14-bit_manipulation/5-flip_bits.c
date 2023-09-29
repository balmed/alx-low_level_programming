#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: numbre 1.
 * @m: numbre 2.
 *
 * Return: number of bits to flip convert numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	int size = 63;
	unsigned long int xorv = n ^ m;
	unsigned long int cmp;

	for (i = size ; i >= 0 ; i--)
	{
		cmp = xorv >> i;
	if (cmp & 1)
		j++;
	}
	return (j);

}
