#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @av: int.
 * @ac: pointer
 *
 * Return:string
 */

char *argstostr(int ac, char **av)
{
int i, nc =0, j, cmpt = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0 ; i < ac ; i++, nc++)
nc += strlen(av[i]);
s = malloc(sizeof(char) * nc + 1);
if (s == 0)
return (NULL);
for (i = 0 ; i < ac ; i++)
{
for (j = 0 ; av[i][j] != '\0' ; j++, cmpt++)
s[cmpt] = av[i][j];
s[cmpt] = '\n';
cmpt++;
}
s[cmpt] = '\0';
return (s);
}
