#include "main.h"
/**
 * binary_to_uint - converts a binary number.
 * @b: binary number.
 *
 * Return: numbre unsigned.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	val = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		val = val * 2 + (*b++ - '0');
	}
	return (val);
}
