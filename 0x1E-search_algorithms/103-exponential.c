#include "search_algos.h"

/**
 * exponential_search - performs exponential search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, n_size = 0;
	int exp;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	n_size = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	exp = binary_search(array + i, n_size, value);
	return (exp == -1 ? exp : exp + (int)i);
}

/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
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
