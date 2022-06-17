#include "main.h"

/**
* lowercase check
* @c: check 
* Return: 0
*/

int _islower(int c)
{
char check_lowercase;
for (check_lowercase = 'a'; check_lowercase <= 'z'; check_lowercase++)
{
if (c == check_lowercase)
return (1);
}
return (0);
}
