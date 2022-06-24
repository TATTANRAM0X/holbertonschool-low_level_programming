#include "main.h"

/**
 * *leet - encodes a string into 1337.
 *
 * @str: string to encode
 *
 * Return: string enconded
 */

char *leet(char *str)
{
	char letter[] = {"aAeEoOtTlL"};
	char leet[] = {"4433007711"};
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
			str[i] = leet[j];
		}
	}
	return (str);
}
