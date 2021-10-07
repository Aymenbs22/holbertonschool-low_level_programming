#include "main.h"
/**
* _isdigit - function that checks for a digit
* Return: 0 or 1
* @c: char
*/
int _isdigit(int c);
{
if ((int)c >= 48 && (int)c <= 57)
	return (1);
	else
	return (0);
}
