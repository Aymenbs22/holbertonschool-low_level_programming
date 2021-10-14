#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 *@src: char
 *@dest: char
 * i - 0
 * l - 0
 * return - dest
*/
char *_strcat(char *dest, char *src)
{
int l = 0, i;
while (dest[l])
{
l++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
}
dest[l] = '\0';
return (dest);
}
