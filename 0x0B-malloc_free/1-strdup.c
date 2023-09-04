#include "main.h"
/**
 * *_strdup - pointer to a newly allocated space in memory and copy.
 * @str: pointer string.
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
int i = 0, size = 0;
char *pte;
if (str == NULL)
return (NULL);
for (; str[size] != '\n' ; size++)
;
pte = malloc(size * sizeof((*str) + 1));
if (pte == 0)
return (NULL);
else
{
for (; i < size ; i++)
pte[i] = str[i];
}
return (pte);
}
