#include "main.h"

/**
* _strcat - concatenate
* @dest: first  string
* @src: second string
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	int string1;
	int string2;

	for (string1 = 0; dest[string1] != '\0'; string1++)
	{	}

	for (string2 = 0; src[string2] != '\0'; string2++)
	{
		dest[string1] = src[string2];
		string1++;
	}

	return (dest);
}
