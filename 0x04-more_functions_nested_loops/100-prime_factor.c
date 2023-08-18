#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - Prints a triangle prime factor of the number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long x, maxf;
long num = 612852475143;
double sq = sqrt(num);
for (x = 1; x <= sq ; x++)
{
if (num % x == 0)
{
maxf = num / x;
}
}
printf("%lu\n", maxf);
return (0);
}


