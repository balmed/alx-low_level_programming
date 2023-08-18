#include "main.h"
#include <unistd.h>
/**
 * print_number - Print  an integer.
 * @n: The integer to print
 *
 * Return: Nothing!
 */
void print_number(int n)
{
unsigned int b = n;
if (n < 0)
{
n *= -1;
b = n;
_putchar('_');
}
b /= 10;
if (b != 0)
print_number(b);
_putchar((unsigned int) n % 10 + '0');
}

