#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - All natural numbers up to 98
 * @n: start point
 * Return: 0
 */

void print_to_98(int n)
{
int x;
if (n <= 98)
{
for (x = n; x <= 98; x++)
{
if (x != 98)
printf("%d, ", x);

else if (x == 98)
printf("%d\n", x);

else
continue;
}
}
}
