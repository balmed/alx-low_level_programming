#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
unsigned int b = n;
if (n < 0)
{
_putchar('-');
b = -b;
}
if ((b / 10) > 0)
print_number(b / 10);
_putchar((b % 10) + 48);
}
