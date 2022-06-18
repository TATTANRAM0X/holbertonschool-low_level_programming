#include "main.h"

/**
* print_last_digit - number
* @last_digit: print last digit
* Return: 0
*/

int print_last_digit(int last_digit)
{
int digit;
digit = last_digit % 10;
if (digit < 0)
{
digit = digit * -1;
}
_putchar(digit + '0');
return (digit);
}
