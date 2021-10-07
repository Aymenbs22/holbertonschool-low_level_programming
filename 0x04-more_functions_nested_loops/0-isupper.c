#include "main.h"
/**
* _isupper - tests function that prints if integer is positive or negative
* Return: 0 or 1
* @c: char
*/
int _isupper(int c)
{
if ((c >= 65) && (c < 91))
{
return (1);
}
else
{
return (0);
}
}
