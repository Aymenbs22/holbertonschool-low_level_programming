#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 *@argc: int!
 *@argv: int
 *c: count
 * Return: 0
*/
int main(int argc, char *argv[])
{
int c;
for (c = 0; c < argc; c++)
printf("argv[%2d]: %s\n", c, argv[c]);
return (0);
}
