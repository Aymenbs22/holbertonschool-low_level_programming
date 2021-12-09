#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer
 * @needle: pointer
 * Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int k;

	while (haystack[i])
{
	j = 0;
	k = i;
	while (haystack[i] == needle[j])
{
	i++;
	j++;
}
	if (needle[j] == '\0')
		return (haystack + k);
	i++;
}
		return (NULL);
}
