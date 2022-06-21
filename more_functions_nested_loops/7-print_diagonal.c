#include "main.h"
/**
* print_diagonal - print line diagonal
* @n: number of time
* Return: 0
*/
void print_diagonal(int n)
{
int var_diagonal_line;
int var_new_space;
int space = ' ';
int diagonal_line = 92;
if (n > 0)
{
for (var_diagonal_line = 0; var_diagonal_line < n; var_diagonal_line++)
{
for (var_new_space = 0; var_new_space < var_diagonal_line; var_new_space++)
{
putchar(space);
}
putchar(diagonal_line);
putchar('\n');
}
}
else
{
putchar('\n');
}
}
