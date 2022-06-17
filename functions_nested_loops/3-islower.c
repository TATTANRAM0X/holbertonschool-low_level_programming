#include "main.h"
/**
* lowercase check
* Return: 0
*/
int _islower(int c)
{
char lowercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (c == lowercase)
return (1);
}
return (0);
}
