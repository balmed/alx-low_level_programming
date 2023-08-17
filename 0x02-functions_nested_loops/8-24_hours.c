#include "main.h"
/**
 * jeck_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Return: Void
 */


void jeck_bauer(void)

int min, h;
for (h = 0 ; h <= 23 ; h++)
{
for (min = 0 ; min <= 59 ; min++)
{
_putchar((h / 10) + 48);
_putchar((h % 10) + 48);
_putchar(':');
_putchar((min / 10) + 48);
_putchar((min % 10) + 48);
_putchar('\n');
}
}

