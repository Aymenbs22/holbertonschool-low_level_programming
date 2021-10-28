#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * @n: size
 * Return: s
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int j = 0;
unsigned int i = 0;
unsigned int f = 0;
unsigned int b;
char *s;

if (s1 != NULL)
{
while (s1[i])
i++;
}
if (s2 != NULL)
{
while (s2[j])
j++;
}
if (n >= j)
f = i + j;
else
f = i + n;
s = malloc(sizeof(char) * f + 1);
if (s == NULL)
return (NULL);
for (b = 0; b < i; b++)
s[b] = s1[b];
j = 0;
while (b < f)
{
s[b] = s2[j];
b++;
j++;
}
return (s);
}
