#include "main.h"
/**
* print_alphabet_x10 - print alphabet x10
* Return: 0
*/
void print_alphabet_x10(void)
{
char letter;
int repeat;
for (repeat = 0; repeat < 10; repeat++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar ('\n');
}
}
