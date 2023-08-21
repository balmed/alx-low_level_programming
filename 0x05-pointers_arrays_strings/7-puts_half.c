#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int i;
for (i = 0 ; str[i] != '\0' ; i++)
;
i++;
for (i = i / 2 ; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
