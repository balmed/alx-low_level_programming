#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * format_char - format string.
 * @separator: the string separator.
 * @aryd: parameter pointer.
 */
void format_char(char *separator, va_list aryd)
{
printf("%s%c", separator, va_arg(aryd, int));
}
/**
 * format_int - format string.
 * @separator: the string separator.
 * @aryd: parameter pointer.
 */
void format_int(char *separator, va_list aryd)
{
printf("%s%d", separator, va_arg(aryd, int));
}
/**
 * format_float - format string.
 * @separator: the string separator.
 * @aryd: parameter pointer.
 */
void format_float(char *separator, va_list aryd)
{
printf("%s%f", separator, va_arg(aryd, double));
}
/**
 * format_string - format string.
 * @separator: the string separator.
 * @aryd: parameter pointer.
 */
void format_string(char *separator, va_list aryd)
{
char *ptr = va_arg(aryd, char *);
switch ((int)(!ptr))
case 1:
ptr = "(nil)";
printf("%s%s", separator, ptr);
}
/**
 * print_all - prints anything.
 * @format: the format of string.
 */
void print_all(const char * const format, ...)
{
int i = 0, j;
char *separator = "";
va_list aryd;
format_t tab[] = {
{"c", format_char},
{"i", format_int},
{"f", format_float},
{"s", format_string},
{NULL, NULL}
};
va_start(aryd, format);
while (format && format[i])
{
j = 0;
while (tab[j].format1)
{
if (format[i] == tab[j].format1[0])
{
tab[j].f(separator, aryd);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(aryd);
}
