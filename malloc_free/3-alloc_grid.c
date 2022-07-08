#include "main.h"

/**
* alloc_grid - function that returns pointer to a 2 dimensional array
* @height: height of the 2d array
* @width: width of the 2d array
* Return: pointer to a 2d array or NULL if failure
*/

int **alloc_grid(int width, int height)
{
	int **arr_2d;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = malloc(height * sizeof(int *));

	if (arr_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_2d[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			if (arr_2d[i] == NULL)
			{
				for (k = 0; k < width; k++)
					free(arr_2d[k]);
				free(arr_2d);
				return (NULL);
			}
			arr_2d[i][j] = 0;
		}
	}
	return (arr_2d);
}
