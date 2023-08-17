#include "main.h"
/**
 * _isdigit - checks for a digit 0 to 9
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 for any else.
 */
int _isdigit(int c) 
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
