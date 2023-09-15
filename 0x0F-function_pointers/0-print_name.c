#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name.
 * @name: name of string.
 * @f: prints by fonction pointer.
 *
 * Return: Empty.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
(*f)(name);

}
