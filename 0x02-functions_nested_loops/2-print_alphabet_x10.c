#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet.
 */
void print_alphabet_x10(void)
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
