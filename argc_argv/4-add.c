#include "main.h"

/**
* main - main declaration for funtion
* @argc: indicate size of argv
* @argv: program argumentet
* Return: EXIT_SUCCESS
*/

int main(int argc, char *argv[])
{
	int number;
	int value;
	int sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (value = 0; argv[number][value]; value++)
		{
			if (argv[number][value] < '0' || argv[number][value] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum +  atoi(argv[number]);
	}
	printf("%d\n", sum);
	return (0);
}
