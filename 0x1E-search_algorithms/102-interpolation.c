#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t po = 0, star_t = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		po = star_t + (((double)(high - star_t) /
			  (array[high] - array[star_t])) * (value - array[star_t]));
		if (po >= size)
		{
			printf("Value checked array[%lu] is out of range\n", po);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", po, array[po]);
		if (array[po] == value)
			return (po);
		else if (array[po] > value)
			high = po - 1;
		else
			star_t = po + 1;
	}
	return (-1);
}
