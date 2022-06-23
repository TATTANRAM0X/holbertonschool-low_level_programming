#include "main.h"

/**
* _strlen - value
* @s: pointer to string
* Return: 0
*/

int _strlen(char *s)
{
int str = 0;

while (*s++)
str++;

return (str);
}
