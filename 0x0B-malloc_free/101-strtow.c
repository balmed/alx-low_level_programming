#include "main.h"
/**
 * wcount - counts the number of words.
 * @s: string
 *
 * Return: The resulting int (s).
 */
int wcount(char *s)
{
int i, n = 0;
for (i = 0 ; s[i] ; i++)
{
if (s[i] == ' ')
{
if (s[i + 1] != ' ' && s[i + 1] != '\0')
n++;
}
else
if (i == 0)
i++;
}
n++;
return (n);
}
/**
 * strtow - Splits a string into words.
 * @str:string
 *
 * Return: Pointer to the resulting string (dest).
 */
char **strtow(char *str)
{
int i, j, k, l;
int cpt = 0;
int n = 0;
char **pte;
if (str == NULL || *str == '\0')
return (NULL);
n = wcount(str);
if (n == 1)
return (NULL);
pte = malloc(n *sizeof(char *));
if (pte == NULL)
return (NULL);
pte[n - 1] = NULL;
i = 0;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1 ; str[i + j] != ' ' && str[i + j] ; j++)
;
j++;
pte[cpt] = (char *)malloc(j *sizeof(char));
j--;
if (pte[cpt] == NULL)
{
for (k = 0 ; k < cpt ; k++)
free(pte[n - 1]);
free(pte);
return (NULL);
}
for (l = 0 ; l < j ; l++)
pte[cpt][l] = str[i + l];
pte[cpt][l] = '\0';
cpt++;
i += j;
}
else
i++;
}
return (pte);
}
