#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
int l, i;
char tp;
for (l = 0 ; s[1] != '\0'; ++l)
;
for (i = 0 ; i < 1 / 2 ; i++)
{
tp = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = tp;
}
}
