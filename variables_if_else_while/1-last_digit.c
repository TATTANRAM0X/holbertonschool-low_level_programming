#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints wheter a number is positive, negative or zero
 * Return: 0 Success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 5 > 5)
	{
		printf("Last digit of %i is %i is greater that 5\n", n, n % 5);
	}
	else
	{
		if (n % 5 < 6 && n % 5 !=0)
		{
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 5);
		}
		else
		{
			printf("Last digit of %i is %i and is 0\n", n, n% 5);
		}
	}
	return (0);

}
