#include "main.h"
/**
 * create_file - function that creates a file with txt
 * @filename: string
 * @text_content:string
 * Return: 0
*/
int create_file(const char *filename, char *text_content)
{
int ope;
int wri;
int len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (;text_content[len];)
len++;
}
ope = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wri = write(ope, text_content, len);
if (wri == -1)
return (-1);
close(ope);
return (1);
}
