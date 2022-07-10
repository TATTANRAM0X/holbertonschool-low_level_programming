#include "main.h"

/**
* _calloc - function that allocates memory for an array, using malloc
* @nmemb: number of elements of the array
* @size: size of each element of the array
* Return: pointer to the array or NULL if failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
