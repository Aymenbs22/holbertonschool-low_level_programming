#include <unistd.h>
#define STDOUT 1
/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main()
{
    write(STDOUT, "Hello world!\n", 13);
    _exit(0);
}
