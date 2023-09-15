#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints string separator the string(,).
 * @separator: pointer string.
 * @n: Numbers of parameter.
 * @...: The integers to print
 *
 * Return: prints string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list argd;
char *ptr;
int i;
if (n == 0)
{
printf("\n");
return;
}
va_start(argd, n);
for (i = n - 1 ; i >= 0 ; i--)
printf("%s%s", (ptr = va_arg(argd, char*)) ? ptr : "(nil)",
i ? (separator ? separator : "") : "\n");
va_end(argd);
}
