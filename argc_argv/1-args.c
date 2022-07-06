#include "main.h"

/**
  * main - main declaration for funtion
  * @argc: indicate size of argv
  * @argv: program arguments
  * Return: EXIT_SUCCES
  * program that prints the number of arguments passed into it
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
