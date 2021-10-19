#include "main.h"
/**
 *_strncpy - function that concatenates two strings
 *@src: char
 *@dest: char
 * i - 0
 * Return: dest
 * @n : num bytes
*/
char *_strncpy(char *dest, char *src, int n);
{
int i = 0;
for (src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
