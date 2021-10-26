#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @size: size
 * @s1: char
 * @s2: char
 * Return: s
*/
char *str_concat(char *s1, char *s2)
{
int j = 0;
int i = 0;
int n = 0;
int b;
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
n = i + j;
s = malloc(sizeof(char) * n + 1);
if (s == NULL)
return (NULL);
for (b = 0; b < i; b++)
s[b] = s1[b];
j = 0;
while (b < n)
{
s[b] = s2[j];
b++;
j++;
}
return(s);
}
