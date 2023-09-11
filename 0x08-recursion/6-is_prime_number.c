#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @oth: value int
 * @n: value int 
 *
 * Return: 1 or 0 .
 * */
int check_prime(int n, int oth);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
/**
 * check_prime - check all number < n if they can divide it
 * @n: input int
 * @oth: input int 
 */
int check_prime(int n, int oth)
{
if (oth  >= n && n > 1)
return (1);
else if (n % oth == 0 || n <= 1)
return (0);
else
return (check_prime(n, oth + 1));
}
