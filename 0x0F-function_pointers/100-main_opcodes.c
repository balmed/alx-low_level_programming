#include "function_pointers.h"
/**
 * main - Entry point.
 * @argc: Number of argc.
 * @argv: paramter vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int *op = (int *)main;
int a;
if (argc != 2)
printf("Error\n"), exit(1);
a = atoi(argv[1]);
if (a < 0)
printf("Error\n"), exit(2);
while (a--)
printf("%02hhx%s", *op++, a ? " " : "\n");
return (0);
}
