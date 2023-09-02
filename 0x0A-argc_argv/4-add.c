#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - string to an digit.
 * @str: array .
 *
 * Return: Always 0 (Success).
 */
int check_num(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

/**
 * main -print the name of the program.
 * @argc: count argumants.
 * @argv: argumants
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int count;
int str1;
int sum = 0;
count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str1 = atoi(argv[count]);
sum += str1;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}
