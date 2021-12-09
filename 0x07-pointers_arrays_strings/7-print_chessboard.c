#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: [8]
*/
void print_chessboard(char (*a)[8])
{
	int i, l;

	for (i = 0; i < 8; i++)
{
	for (l = 0; l < 8; l++)
{
	_putchar(a[i][l]);
}
	_putchar('\n');
}
}
