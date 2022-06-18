#include "main.h"

/**
* jack_bauer - print hour and minute
* Return: 0
*/

void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int base = 10;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar((hours / base) + '0');
_putchar((hours % base) + '0');
_putchar(':');
_putchar((minutes / base) + '0');
_putchar((minutes % base) + '0');
_putchar('\n');
}
}
}
