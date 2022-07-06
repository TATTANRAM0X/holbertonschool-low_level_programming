#include "main.h"

/**
* _memset - function that fills memory with a constant byte
* @s: pointer that is going to have the constant byte.
* @b: constant byte.
* @n: limit
* Return: pointer s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
