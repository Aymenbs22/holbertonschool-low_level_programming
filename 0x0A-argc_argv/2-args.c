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
printf("%s\n", argv[c]);
return (0);
}
