#include "main.h"
/**
* more_numbers - print numbers x10
* Return: 0
*/
void more_numbers(void)
{
int number;
int repeat;
int base = 10;
int min_repeat = 1;
int max_repeat = 10;
int min_number = 0;
int max_number = 14;
for (repeat = min_repeat; repeat <= max_repeat; repeat++)
{
for (number = min_number; number <= max_number; number++)
{
if (number >= 10)
{
putchar ((number / base) + '0');
}
putchar ((number % base) + '0');
}
putchar ('\n');
}
}
