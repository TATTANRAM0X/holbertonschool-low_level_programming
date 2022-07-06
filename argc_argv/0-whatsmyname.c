#include "main.h"

/**
  * main - main declaration for funtion
  * @argc: indicate size of argv
  * @argv: program arguments
  * Return: EXIT_SUCCESS 
  * prints the name of a program, if the name changes, the new name is printed.
  * The program prints the string located at position 0
  * which is equivalent to the name of the program used for execution
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}
