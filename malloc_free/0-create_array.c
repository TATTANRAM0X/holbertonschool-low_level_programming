#include "main.h"

/**
  * create_array - function that creates an array of chars,
  * and initializes it with a specific char.
  * @size: size of the array.
  * @c: char that will fill the array.
  * Return: pointer to the array, or NULL if it fails.
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
