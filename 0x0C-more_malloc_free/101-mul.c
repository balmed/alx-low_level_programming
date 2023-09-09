#include "main.h"
#include <stdlib.h>
/**
 * _puts - prints a string.
 * @str: pointer to the string.
 *
 * Return: empty.
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
}
/**
 * _atoi - convert a string to an integer.
 * @s:char type string.
 *
 * Return: integer.
 */
int _atoi(const char *s)
{
int sign = 1;
unsigned long int resp = 0, first1, i;
for (first1 = 0 ; !(s[first1] >= 48 && s[first1] <= 57); first1++)
{
if (s[first1] == '-')
{
sign *= -1;
}
}
for (i = first1 ; s[i] >= 48 && s[i] <= 57 ; i++)
{
resp *= 10;
resp += (s[i] - 48);
}
return (sign *resp);
}
/**
 * printput - prints an integer.
 * @n: int.
 *
 * Return: 0.
 */
void printput(unsigned long int n)
{
unsigned long int resp, i, divisor = 1;
for (i = 0 ; n / divisor > 9 ; i++, divisor *= 10)
;
for (; divisor >= 1 ; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}
/**
 * main - The result multiplies two positive numbers.
 * @argc: int
 * @argv: list
 *
 * Return: 0.
 */
int main(int argc, char const *argv[])
{
(void)argc;
if (argc != 3)
{
_puts("Error ");
exit(98);
}
printput(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return (0);
}
