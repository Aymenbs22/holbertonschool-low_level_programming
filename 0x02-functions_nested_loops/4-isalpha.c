#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c:first letter
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'z' && c <= 'A')
	return (1);
	else
	return (0);
}
