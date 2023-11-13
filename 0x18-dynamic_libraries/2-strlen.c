#include <unistd.h>

/**
 * _strlen - Computes the length of a string
 * @s: The input parameter string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
int cpt;
for (cpt = 0 ; *s != '\0' ; s++)
++cpt;
return (cpt);
}
