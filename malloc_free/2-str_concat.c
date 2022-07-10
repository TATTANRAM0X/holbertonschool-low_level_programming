#include "main.h"

/**
  * str_concat - funtion that concatenate two strings
  * @s1: string one
  * @s2: string two
  * Return: Pointer to the concatenated string or NULL if failure
  */

char *str_concat(char *s1, char *s2)
{
	char *concat = NULL;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	concat = malloc((sizeof(char) * (i + j)) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		concat[i] = s2[j];

	return (concat);
}
