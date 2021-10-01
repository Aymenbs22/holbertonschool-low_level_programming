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
	int i = 0;
while (i < 16)
{
	if (i >= 10)
	putchar(i + 87);
	else
	putchar(i + 48);
	i++;
}
	putchar('\n');
	return (0);
}
