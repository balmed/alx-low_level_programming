#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers separator the string(,).
 * @separator: pointer string.
 * @n: Numbers of parameter.
 * @...: The integers to print
 *
 * Return: prints numbers integer.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list argd;
unsigned int i;
if (n == 0)
{
/* printf("\n"); */
return;
}
va_start(argd, n);
for (i = 0 ; i < n ; i++)
printf("%d%s", va_arg(argd, int), (i || i == 0) ? (separator ? separator : "") : "\n");
va_end(argd);
}
