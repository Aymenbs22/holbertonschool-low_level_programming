#include "main.h"
/**
 * print_sign - function that checks for lowercase character.
 * @n:int n
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
