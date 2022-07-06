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
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
