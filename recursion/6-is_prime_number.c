#include "main.h"

int prime_number(int n, int p);

/**
* is_prime_number - returns if the input integer is a prime number
* @n: value
* Return: 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
* prime_number - function that validates if a number is prime
* @n: value
* @p: int
* Return: 0
*/

int prime_number(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (prime_number(n, p - 1));
}
