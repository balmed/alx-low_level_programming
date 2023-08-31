#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string
 *
 * Return: The resulting string (p).
 */
int _strlen_recursion(char *s)
{
int p = 0;
if (*s > '\0')
{
p += _strlen_recursion(s + 1) + 1;
}
return (p);
}
