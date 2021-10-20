#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * int main - void
 *@s: char
 *s: char
 * Return: 0
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar (*s);
}
