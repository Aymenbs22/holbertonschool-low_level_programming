#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - get the signe of numbre
 *
 * @tolower - get the
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
{
	if(c != 'e' && c != 'q')
	putchar(c);
}
	putchar('\n');
	return (0);
}
