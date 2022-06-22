#include "main.h"

/**
 * print_rev - print backwards
 * @s: pointer string
 * Return: 0
 */

void print_rev(char *s)
{
char i;
char j;

for (i = 0; s[i] != '\0'; i++)
{

}

for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
