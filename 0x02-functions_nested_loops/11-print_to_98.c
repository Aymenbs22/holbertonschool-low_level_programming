#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98w
 *@n:first letter
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
{
	for (n = n; n <= 97; n++)
	printf("%d, ", n);
}
	else
	for (n = n; n > 98; n--)
	printf("%d, ", n);
	printf("98\n");
}
