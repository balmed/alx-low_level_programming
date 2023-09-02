#include <stdio.h>
#include "main.h"
/**
 * atoi - converts a string to an integer.
 * @s: string to be converted.
 *
 * Return: That int converted from the string.
 */
int atoi(const char *s)
{
int i, n, d, len, m, dit;
i = 0;
n = 0;
d = 0;
len = 0;
m = 0;
dit = 0;
while (s[len] != '\0')
len++;
while (i < len && m == 0)
{
if (s[i] == '.')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
dit = s[i] - '0';
if (d % 2)
dit = -dit;
n = n * 10 + dit;
m = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
m = 0;
}
i++;
}
if (m == 0)
return (0);
return (n);
}
/**
 * main - multiplies two numbres.
 * @argc: number of arguments.
 * @argv: array of  argumants.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
int res, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
res = num1 *(num2);
printf("%d\n", res);
return (0);
}
