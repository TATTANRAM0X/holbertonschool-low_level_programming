#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: string
* Return: 0
*/

char *cap_string(char *str)
{
int a = 0;
int b;

char x[14] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

while (str[a] != '\0')
{
if (a == 0 && str[a] >= 97 && str[a] <= 122)
{
str[a] = str[a] - 32;
}
b = 0;
while (x[b] != '\0')
{
if (x[b] == str[a] && (str[a + 1] >= 97 && str[a + 1] <= 122))
{
str[a + 1] = str[a + 1] - 32;
}
b++;
}
a++;
}
return (str);
}
