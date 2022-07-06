#include "main.h"

/**
* _strncat - concatenate
* @dest: first string
* @src: second string
* @n: Parameter
* Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
int string1 = 0;
int string2 = 0;

while (dest[string1] != 0)
{
string1++;
}
while (src[string2] != 0 && string2 < n)
{
dest[string1] = src[string2];
string1++;
string2++;
}
return (dest);
}
