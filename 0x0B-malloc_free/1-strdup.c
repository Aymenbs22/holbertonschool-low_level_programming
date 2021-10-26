#include "main.h"
/**
 * _strdup - function that creates an array of chars
 * s: char
 * @str: char
 * Return: s
*/
char *_strdup(char *str)
{
int i = 0;
int j = 0;
char *s;
if (str == NULL)
return (NULL);

while (str[i] != '\0')
{
i++;
}
s = malloc(sizeof(char) * i);
while (str[j] != '\0')
{
s[i] = str[i];
j++;
}
return (s);
}
