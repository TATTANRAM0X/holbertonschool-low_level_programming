#include "function_pointers.h"

/**
  * print_name - function that prints a name
  * @name: pointer to the name passed by parameter
  * @f: pointer to a function that prints the name
  */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
