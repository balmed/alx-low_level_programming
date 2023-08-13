#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints if number is last_digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, di;
srand(time(0));
	n = rand() - RAND_MAX / 2;
	di = (n % 10);
if (di > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, di);
else if (di == 0)
	printf("last digit of %d is %d and is 0\n", n, di);
else if (di < 6 && di != 0)
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, di);
return (0);
}
