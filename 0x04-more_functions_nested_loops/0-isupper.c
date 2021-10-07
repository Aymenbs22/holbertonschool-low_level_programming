#include "main.h"
/**
* _isupper - tests function that prints if integer is positive or negative
* Return: 0 or 1
* @c: char
*/
int _isupper(int c)
{
if ((int)c >= 65 && (int)c <= 90)
	return (1);
	else
	return (0);
}
