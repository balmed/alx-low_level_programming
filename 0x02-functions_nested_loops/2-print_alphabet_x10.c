#include "main.h"
/**
 * print_alphabat - prints 10 times the alphabet.
 *
 * Return: Void.
 */
void print_alphabat(void)
{
int line;
char ch;
for (line = 0 ; line <= 9 ; line++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
_putchar(ch);
_putchar('\n');
}
}
