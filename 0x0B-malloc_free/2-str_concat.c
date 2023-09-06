#include "main.h"
#include <string.h>
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
s1 = " ";
if (s1 == NULL)
s2 = " ";
size1 = strlen(s1);
size2 = strlen(s2);
pte = malloc((size1 + size2) *sizeof(char) + 1);
if (pte == NULL)
return (NULL);
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
