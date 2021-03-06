#include "main.h"

/**
 * _strncpy - copy string
 * @dest: first string
 * @src: second string
 * @n: Parameter
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	x = x;
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
