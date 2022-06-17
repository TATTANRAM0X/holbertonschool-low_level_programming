#include "main.h"

/**
* _isalpha - check the alphabetic character
* @c: check
* Return: 0
*/

int _isalpha(int c)
{
char check_lowercase;
char check_uppercase;
for (check_lowercase = 'a'; check_lowercase <= 'z'; check_lowercase++)
{
if (c == check_lowercase)
return (1);
}
for (check_uppercase = 'A'; check_uppercase <= 'Z'; check_uppercase++)
{
if (c == check_uppercase)
return (1);
}
return (0);
}
