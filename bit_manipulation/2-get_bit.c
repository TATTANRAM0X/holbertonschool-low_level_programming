#include "main.h"

/**
 * get_bit - check the code
 *@n: binary number
 *@index: index of the number
 *Return: the value of the bit at index index
 *or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
