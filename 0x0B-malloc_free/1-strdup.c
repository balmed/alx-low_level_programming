#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string.
 *
 * Return: 0
 */
char *_strdup(char *str)
{
int i, size = 0;
char *pte;
if (str == NULL)
return (NULL);
for (; str[size] != '\n' ; size++)
;
pte = malloc(size * sizeof(*str) + 1);
if (pte == 0)
{
return (NULL);
}
else
{
for (i = 0 ; i < size ; i++)
pte[i] = str[i];
}
return (pte);
}
