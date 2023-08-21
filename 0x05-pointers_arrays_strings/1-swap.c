#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: input parameter 1
 * @b: input parameter 1
 *
 * Return: empty
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
