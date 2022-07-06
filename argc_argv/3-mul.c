#include "main.h"

/**
* main - main declaration for funtion
* @argc: indicate size of argv
* @argv: program arguments
* Return: EXIT_SUCCESS
*/

int main(int argc, char *argv[])
{
	int result = 0;
	int first_argument;
	int second_argument;
	if (argc == 3)
	{
		first_argument = atoi(argv[1]);
		second_argument = atoi(argv[2]);
		result = first_argument * second_argument;
		printf("%i\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (EXIT_SUCCESS);
}
