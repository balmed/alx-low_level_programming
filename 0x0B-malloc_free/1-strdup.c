#include "main.h"
/**
 * *_strdup - pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 * @str: pointer string.
 *
 * Return: NULL if str = NULL.
 * or, pointer to the duplicated string.
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
