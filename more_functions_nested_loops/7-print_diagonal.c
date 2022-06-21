#include "main.h"
/**
* print_diagonal - print line diagonal
* @n: number of time
* Return: 0
*/
void print_diagonal(int n)
{
int variable_diagonal_line;
int variable_new_space;
int space = ' ';
int diagonal_line = 92;
if (n > 0)
{
for (variable_diagonal_line = 0; variable_diagonal_line < n; variable_diagonal_line++)
{
for (variable_new_space = 0; variable_new_space < variable_diagonal_line; variable_new_space++)
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
