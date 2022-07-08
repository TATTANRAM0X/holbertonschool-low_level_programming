#include "main.h"
#include<string>

/**
* _strdup- function that returns pointer to newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: size of the array.
* Return: pointer to duplicated string, or NULL if it fails or pointer is NULL
* strlen Function used to read the length of a text string
*/

char *_strdup(char *str)
{
	unsigned long int i = 0;
	char *duplicated = NULL;

	if (str == NULL)
		return (NULL);

	duplicated = malloc((strlen(str) + 1) * sizeof(char));

	if (duplicated == NULL)
		return (NULL);

	while (i <= (strlen(str) + 1))
	{
		duplicated[i] = str[i];
		i++;
	}
	return (duplicated);
}
