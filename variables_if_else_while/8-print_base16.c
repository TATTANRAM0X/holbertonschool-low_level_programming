#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints wheter a number is positive, negative or zero
 * Return: 0 Success
 */

int main(void)
{
char number;
char letter;
for (number = '0' ; number <= '9' ; number++)
putchar(number);
for (letter = 'a' ; letter <= 'f' ; letter++)
putchar(letter);
putchar('\n');
return (0);
}
