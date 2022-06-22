#include "main.h"

/**
* *_strcpy - Prototype
*
* @dest: pointer that points to dest, the destination of the copied string.
* @src: pointer that points to src, the source of the string to copy.
*
* Return: *dest
*/

char *_strcpy(char *dest, char *src)
{
	int x;
	int y;
	for (x = 0; src[x] != '\0'; x++)
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
