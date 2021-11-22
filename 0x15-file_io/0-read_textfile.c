#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename:  file
 * @letters: int letters
 * Return: readd
*/
ssize_t read_textfile(const char *filename, size_t letters)

{
	int fileds;
	int readd;
	char *buff;
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fileds = open(filename, O_RDONLY);
	if (fileds == -1)
		return (0);
	readd = read(fileds, buff, letters);
	write(STDOUT_FILENO, buff, readd);
	free(buff);
	close(fileds);
	return (readd);
}
