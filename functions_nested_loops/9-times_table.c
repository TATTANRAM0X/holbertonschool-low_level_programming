#include "main.h"

/**
* times_table - times table
* Return: 0
*/

void times_table(void)
{
int eje_x;
int eje_y;
int resultado;

for (eje_x = 0; eje_x <= 9; eje_x++)
{
_putchar('0');
for (eje_y = 1; eje_y <= 9; eje_y++)
{
_putchar(',');
_putchar(' ');

resultado = eje_x * eje_y;
if (resultado <= 9)
_putchar(' ');
else
_putchar((resultado / 10) + '0');
_putchar((resultado % 10) + '0');
}
_putchar('\n');
}
}
