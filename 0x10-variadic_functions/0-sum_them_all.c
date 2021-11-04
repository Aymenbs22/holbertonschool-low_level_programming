#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: num
 * @...: rest
 * Return: num
*/
int sum_them_all(const unsigned int n, ...)
{
va_list argv;
unsigned int i;
int num = 0;

va_start(argv, n);
for (i = 0 ;i < n; i++)
{
num += va_arg(argv, int);
}
va_end(argv);
return (num);
}

