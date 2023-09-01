#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 *            to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
char *dest_ptr = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_ptr);
}
