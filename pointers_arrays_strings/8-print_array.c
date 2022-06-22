#include "main.h"

/**
* print_array - print string
* @a: first parameter
* @n: second parameter
* Return: 0
*/

void print_array(int *a, int n)
{
int array;

for (array = 0; array < n; array++)
{
printf("%d", a[array]);
if (array < n - 1)
{
printf(", ");
}
}
printf("\n");
}
