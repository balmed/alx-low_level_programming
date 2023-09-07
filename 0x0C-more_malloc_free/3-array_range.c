#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min int
 * @max: max int
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
int cpt, i;
int *ptr;
if (min > max)
return (NULL);
cpt = max - min + 1;
ptr = malloc(cpt *sizeof(int));
if (!ptr)
return (NULL);
for (i = 0 ; i < cpt ; i++)
ptr[i] = min++;
return (ptr);
}
