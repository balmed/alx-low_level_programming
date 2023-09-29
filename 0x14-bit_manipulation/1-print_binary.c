#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: numbre to print
 *
 * Return: empty.
 */
void print_binary(unsigned long int n)
{
	int i, size = 63, fa = 0;
	unsigned long int cmp;

	for (i = size ; i >= 0 ; i--)
	{
		cmp = n >> i;
		if (cmp & 1)
		{
			_putchar('1');
			fa++;
		}
		else if (fa)
			_putchar('0');
	}
		if (!fa)
			_putchar('0');
}
