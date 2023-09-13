#include "function_pointers.h"
/**
 * array_iterator - function parameter on each element of an array.
 * @array: The array.
 * @size: The size of the array.
 * @action: Is a pointer to the function you need to use.
 *
 * Return: Empty.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *sizeAr = size + array;
if (array && size && action)
for (; array < sizeAr ; action(*array++))
;
}
