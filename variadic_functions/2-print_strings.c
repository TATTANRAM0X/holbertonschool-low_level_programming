#include "variadic_functions.h"

/**
  * print_strings - that fucntion print a strings
  * @separator: string to print between arguments
  * @n: number of arguments
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *str;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
