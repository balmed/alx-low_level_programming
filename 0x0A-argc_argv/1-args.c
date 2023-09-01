#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: numbre of arguments.
 * @argv: pointer of  argumants.
 *
 * Return:  Always 0 (Success).
 */
int main(int argc , char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
