#include "main.h"

/*
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: constant limited
 * Return: Pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
