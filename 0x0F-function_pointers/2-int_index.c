#include "function_pointers.h"
/**
 * int_index - function parameter on each element of an array.
 * @array: Numbre of elements in array.
 * @size: The size of the array.
 * @cmp: Pointer function to compare values.
 *
 * Return: The integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && size && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
