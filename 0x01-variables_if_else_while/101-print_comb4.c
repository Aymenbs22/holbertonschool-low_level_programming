#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 * Return: 0
*/
int main(void)
{
int i, e, g;

e = 48;
while (e < 58)
{
i = 48;
while (i < 58)
{
g = 48;
while (g < 58)
{
if (e != i && e != g && i != g && e < i && i < g)
{
putchar(e);
putchar(i);
putchar(g);
if (i == 56 && e == 55 && g == 57)
{
break;
}
putchar(',');
putchar(' ');
}
g++;
}
i++;
}
e++;
}
putchar('\n');
return (0);
}
