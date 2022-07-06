#include "main.h"

/**
  * main - main declaration for funtion
  * @argc: indicate size of argv
  * @argv: program arguments
  * Return: EXIT_SUCCESS
  */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (EXIT_SUCCESS);
}
