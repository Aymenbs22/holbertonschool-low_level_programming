#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 *@s: char
 *s: char
 * Return: 0
*/
int _strlen_recursion(char *s);
{
static int length=0;
if(*s!=NULL)
{
length++;
_strlen_recursion(++s);
}
else
{
return length;
}
}
