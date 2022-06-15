#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet less e and q, in lowercase
 * Return: 0 Success
 */

int main(void)
{
char letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
if (letter == 'e' || letter == 'q')
continue;
putchar(letter);
}
putchar('\n');
return (0);
}
