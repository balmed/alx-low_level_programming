#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: Pointer to put the constant.
 * @b: Constant.
 * @n: Bytes to use.
 *
 * Return: Pointer to the resulting (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; n > 0 ; i++, n--)
{
s[i] = b;
}
return (s);
}
