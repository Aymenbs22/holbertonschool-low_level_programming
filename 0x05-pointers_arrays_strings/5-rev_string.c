#include "main.h"
	int str_len(char *st);
/**
 * rev_string - function that returns the length of a string
 *
 * i - int
 *@s:int
 *Return: i
*/
	void rev_string(char *s)
	{
	int len, i;

	char *start, *end, temp;

	len = str_len(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)

	end++;

	for (i = 0; i < len / 2; i++)
	{
	temp = *end;
	*end = *start;
	*start = temp;
	start++;
	end--;
	}
}
/**
 * str_len - function that returns the length of a string
 * @ptr: char
 * Return: 0
*/
	int str_len(char *ptr)

{
	int i = 0;

	while (*(ptr + i) != '\0')

	i++;
	return (i);
}
