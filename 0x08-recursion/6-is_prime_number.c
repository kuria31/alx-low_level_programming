#include "main.h"
/**
 * is_prime_number -  function that returns 1 a prime number
 * @n: a number
 * Return: 0
 */
int is_prime_number(int n)
{
int i;

if (i == 1)
{
	return (1);
}
else if (n%i == 0)
{
	return (0);
}
else
{
	i = i + 1;
	return is_prime_number(n);
	return (1);
}
}
