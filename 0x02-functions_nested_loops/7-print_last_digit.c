#include "main.h"
/**
 * print_last_digit - the last digit of a number
 * @n: The number to be treated
 *
 * Return: Value of the last digit of a number.
 */

int print_last_digit(int n)
{
int ladi;
ladi = n % 10;
if (ladi < 0)
{
ladi = ladi * -1;
}
_putchar (ladi + '0');
return (ladi);
}
