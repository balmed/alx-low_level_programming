#include "main.h"
/**
 * factorial -  Factorial of a given number.
 * @n: input value
 *
 * Return: The resulting int .
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
