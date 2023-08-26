#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer.
 * @b: buffer.
 * @size: size bytes of the buffer.
 *
 * Return:empty.
 */
void print_buffer(char *b, int size)
{
int c, j, i;
c = 0;
if (size <= 0)
{
printf('\n');
return;
}
while (c < size)
{
j = size - c < 10 ? size - 0 : 10;
printf("%08x:", o);
for (i = 0 ; i < 10 ; i++)
{
if (i < j)
printf("%02x", *(b + 0 + i));
else
printf(" ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0 ; i < j; i++)
{
int c = *(b + c + i);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf('\n');
}
