#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints combination between numbers and simbols
 * Return: 0 Success
 */

int main(void)
{
int number;
for (number = '0' ; number <= '9' ; number++)
{
putchar(number);
if (number < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
