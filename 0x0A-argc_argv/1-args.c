#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: numbre of command line arguments.
 * @argv: pointer to an array of command line ragumants.
 *
 * Return:  Always 0 (Success).
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i, l = 0, m = atoi(argv[1]);
int tab[] = {25, 10, 5, 2, 1};
for (i = 0 ; i < 5 ; i++)
{
if (m >= tab[i])
{
l += m / tab[i];
m = m % tab[i];
if (m % tab[i] == 0)
{
break;
}
}
}
printf("%d\n", l);
}
else
{
printf("Error\n");
return (1)
}
return (0);
}
