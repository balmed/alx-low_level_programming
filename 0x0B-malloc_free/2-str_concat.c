#include "main.h"
/**
 * _strlen - count length of a string.
 * @s: string.
 *
 * Return: int
 */
int _strlen(char *s)
{
int size = 0;
for (size = 0 ; s[size] != '\0' ; size++)
;
return (size);
}
/**
 * str_concat - concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2, i;
char *pte;
if (s1 == NULL)
s1 = "\0";
if (s1 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
pte = malloc((size1 + size2) *sizeof(char) + 1);
if (pte == 0)
return (0);
for (i = 0 ; i <= size1 + size2 ; i++)
{
if (i < size1)
pte[i] = s1[i];
else
pte[i] = s2[i - size1];
}
pte[i] = '\0';
return (pte);
}
