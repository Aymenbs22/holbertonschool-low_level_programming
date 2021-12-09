#include "main.h"
/**
 * strspn -  function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
int i, r, c;

for (i = 0; s[i]; i++)
{	c = 0;
for (r = 0; accept[r]; r++)
{
if (s[i] == accept[r])
	c++;
}
if (c == 0)
{
	return (i);
}
}
	return (0);
}
