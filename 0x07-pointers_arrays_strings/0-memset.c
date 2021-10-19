#include "main.h"
/**
 *_memset - function that reverses the content of an array of integers
 *@b: int
 *@n: int
 *@s: char
 *Return: s
 *i - 0
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
