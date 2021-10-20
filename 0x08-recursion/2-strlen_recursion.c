#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 *@s: char
 *s: char
 * Return: count
*/
int _strlen_recursion(char *s)
{
int count = 0;
if (*s != '\0')
{
count++;
_strlen_recursion(++s);
}
else
{
return (count);
}
}
