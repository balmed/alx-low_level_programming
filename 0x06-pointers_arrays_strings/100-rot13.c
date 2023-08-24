#include "main.h"
/**
 * *rot13 - Encodes a string using rot13.
 * @p: input string.
 *
 * Return: Pointer to the resulting string (ptr).
 */
char *rot13(char *p)
{
int i;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = p;
while (*p)
{
for (i = 0 ; i <= 52 ; i++)
{
if (*p == rot13[i])
{
*p = ROT13[i];
break;
}
}
p++;
}
return (ptr);
}

