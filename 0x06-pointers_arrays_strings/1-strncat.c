#include "main.h"
/**
 *_strncat - function that concatenates two strings
 *@src: char
 *@dest: char
 * i - 0
 * l - 0
 * Return: dest
 * @n : num bytes
*/
char *_strncat(char *dest, char *src, int n)
{
int l = 0, i;
while (dest[l])
{
l++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[l] = src[i];
l++;
}
dest[l] = '\0';
return (dest);
}
