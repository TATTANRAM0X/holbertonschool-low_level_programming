#include "main.h"

/**
* _puts - value
* @str: pointer to string
* Return: 0
*/

void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
