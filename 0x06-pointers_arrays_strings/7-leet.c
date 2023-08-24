#include "main.h"
/**
 * *leet - encodes a string into 1337.
 * @n: String.
 *
 * Return: Pointer to the resulting string (cp).
 */
char *leet(char *n)
{
char *cp = n;
char alph[] = {'A', 'E', 'O', 'T', 'L'};
int val[] = {4, 3, 0, 7, 1};
unsigned int i;
while (*n)
{
for (i = 0 ; i < sizeof(alph) / sizeof(char) ; i++)
{
if (*n == alph[i] || *n == alph[i] + 32)
{
*n = 48 + val[i];
}
}
n++;
}
return (cp);
}
