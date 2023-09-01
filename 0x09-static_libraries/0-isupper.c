#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 for any else.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
