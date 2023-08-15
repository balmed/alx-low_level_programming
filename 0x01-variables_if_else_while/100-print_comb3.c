#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int di1 = 0, di2;
while (di1 <= 9)
{di2 = 0;
while (di2 <= 9)
{if (di1 != di2 && di1 < di2)
{putchar(di1 + 48);
putchar(di2 + 48);
if (di1 + di2 != 17)
{putchar(',');
putchar(' ');
}
}
di2++;
}
di1++;
}
putchar('\n');
return (0);
}
