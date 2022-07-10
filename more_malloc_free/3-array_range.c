#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: Pointer to the array or NULL if failure
  */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
