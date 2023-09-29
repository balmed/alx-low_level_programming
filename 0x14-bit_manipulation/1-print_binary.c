#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: numbre to print
 *
 * Return: empty.
 */
void print_binary(unsigned long int n)
{
	int bin = sizeof(n), fa = 0;

	while (bin)
	{
		if (n & 1L << --bin)
		{
			_putchar('1');
			fa++;
		}
		else if (fa)
			_putchar('0');
		if (!fa)
			_putchar('0');
	}
}
