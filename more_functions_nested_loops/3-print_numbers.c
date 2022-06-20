#include "main.h"
/**
* print_numbers - print numbers 0 to 9
* Return: 0
*/
void print_numbers(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
putchar(number);
}
putchar('\n');
}
