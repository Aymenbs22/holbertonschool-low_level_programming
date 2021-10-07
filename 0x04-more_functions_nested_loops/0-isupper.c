#include "main.h"
/**
* _isupper - tests function that prints if integer is positive or negative
* Return: 0 or 1
* @c: char
*/
int _isupper(int c)
{
if ((int)c >= 97 && (int)c <= 132)
	return (1);
	else
	return (0);
}
