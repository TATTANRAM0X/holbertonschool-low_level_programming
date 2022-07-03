#include "main.h"

int square_root(int n, int x);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: int
* Return: value
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (square_root(n, 0));
}

/**
* square_root - bonus prototype - validates the square root of a number
* @n: int
* @x: var
* Return: value
*/

int square_root(int n, int x)
{
	if (x * x > n)
	return (-1);
	if (x * x == n)
	return (x);
	return (square_root(n, x + 1));
}
