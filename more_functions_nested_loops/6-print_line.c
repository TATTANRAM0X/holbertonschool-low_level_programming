#include "main.h"

/**
 * print_line - Print char _
 * @n: inhereted
 * Return: 0
 */

void print_line(int n)
{

int new_line;
int underscore_ascii = 95;

if (n > 0)
{

for (new_line = 0; new_line < n; new_line++)
{
putchar(underscore_ascii);
}

}
putchar('\n');
}
