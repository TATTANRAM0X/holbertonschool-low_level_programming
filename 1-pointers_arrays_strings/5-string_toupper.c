#include "main.h"

/**
* string_toupper - changes lowercase to uppercase
* @str: string
* Return: 0
*/

char *string_toupper(char *str)
{
int x = 0;
char letter_a_ascii = 97;
char letter_z_ascii = 122;
char space_ascii = 32;

while (str[x])
{
if (str[x] >= letter_a_ascii && str[x] <= letter_z_ascii)
str[x] -= space_ascii;

x++;
}
return (str);
}
