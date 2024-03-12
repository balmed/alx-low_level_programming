#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: it's size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *b = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", b[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (b[i] == value)
			return ((b - array) + i);
		else if (b[i] > value)
			size = i;
		else
		{
			b += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}

