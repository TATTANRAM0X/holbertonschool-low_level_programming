#include "main.h"

/**
* rev_string - print reverse a string
* @s: Parameter
* Return: 0
*/

void rev_string(char *s)
{
char rev = s[0];
int n = 0;
int x;

while (s[n] != '\0')
n++;
for (x = 0; x < n; x++)
{
n--;
rev = s[x];
s[x] = s[n];
s[n] = rev;
}
}
