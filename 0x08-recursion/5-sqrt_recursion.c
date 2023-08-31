#include "main.h"
/**
 * _sqrt_recursion - Find natural square root.
 * @n: input numbre
 * @v: square root
 *
 * Return: The resulting int.
 */
int square(int n, int v)
int _sqrt_recursion(int n
{
return (square(n, 1));
}
/**
 * square - Find square root
 * @n: input numbre to find square root
 * @v: square root
 *
 * Return: The resulting int.
 */
int square(int n, int v)
{
if (v * v  == n)
return (v);
else if (v * v  < n)
return (square(n, v + 1));
else
return (-1);
}
