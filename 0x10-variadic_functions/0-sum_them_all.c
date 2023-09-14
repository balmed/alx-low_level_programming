#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - The sum of all its parameters.
 * @n: Numbre of parameter.
 * @...: The integers to print
 *
 * Return: sum of integer.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list argd;
int sum = 0;
unsigned int i;
if (n == 0)
return (0);
va_start(argd, n);
for (i = 0 ; i < n ; i++)
sum += va_arg(argd, int);
va_end(argd);
return (sum);
}
