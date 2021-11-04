#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: sep.
 * @n: numb of str
 * @...: num
 * Description: string to be printed between the strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *p;
unsigned int i, stop;
va_start(args, n);
stop = n - 1;
for (i = 0; i < n; i++)
{
p = va_arg(args, char *);
if (p)
printf("%s", p);
else
printf("(nil)");
if (separator && i != stop)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
