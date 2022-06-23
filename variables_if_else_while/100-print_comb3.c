#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Success
 */

int main(void)
{
int number = 0;

while (number <= 99)
{
putchar((number / 10) + '0');
putchar((number % 10) + '0');

if (number != 99)
{
putchar(',');
putchar(' ');
}
number++;
}

putchar('\n');
return (0);
}
