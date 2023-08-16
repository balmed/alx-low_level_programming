#include "main.h"
/**
 * print_alphabat - prints 10 times the alphabet.
 *
 * Return: Void.
 */
void print_alphabat(void)
{
int line;
int alp;
for (line = 0 ; line <= 9 ; line++)
{
for (alp = 97 ; alp <= 122 ; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
