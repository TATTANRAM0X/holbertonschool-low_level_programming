#include "holberton.h"

/**
 * print_numbers - Prints numbers 0 to 9 \n
 *
 * Return: void
 */

void print_numbers(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
_putchar(number);
}
_putchar('\n');
}
