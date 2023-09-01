#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 for lowercase character.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
