#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: string
 * @text_content:string
 * Return: fileds
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fileds;
int len = 0;
int wri;

if (filename == NULL)
	return (-1);
fileds = open(filename, O_APPEND | O_WRONLY);
if (fileds == -1)
	return (-1);
if (text_content != NULL)
{
for (; text_content[len];)
	len++;
wri = write(fileds, text_content, len);
if (wri  == -1)
	return (-1);
}
close(fileds);
	return (1);
}
