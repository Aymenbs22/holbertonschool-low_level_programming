#include "main.h"
/**
 * print_last_digit - function that checks for lowercase character.
 *@n:first letter
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
{
	for (n = n; n<= 98; n++)
	printf("%d, ", n);
}
	else
	for (n = n; n > 98; n--)
	printf("%d, ", n);
	printf("98\n");
}
