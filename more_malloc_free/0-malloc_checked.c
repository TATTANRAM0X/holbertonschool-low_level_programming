#include "main.h"

/**
  * malloc_checked - funtion that allocated memory using malloc
  * @b: Parameter for malloc
  * Return: Pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *allocated_memory;

	allocated_memory = malloc(b);
	if (allocated_memory == NULL)
	{
		exit(98);
	}
	return (allocated_memory);
}
