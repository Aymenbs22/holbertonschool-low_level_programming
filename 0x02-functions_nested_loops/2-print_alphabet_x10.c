#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)

{
	char c;
	int i = 0;
	while (i < 10)
    {
	for (c = 'a' ; c <= 'z' ; c++)
	putchar(c);
	putchar('\n');
	i++;
    }
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
