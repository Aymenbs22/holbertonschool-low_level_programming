#include "main.h"
/**
 * _sqrt - function that prints a string in reverse
 *@k: num!
 *s: char
 *@r: root tested
 * Return: (_sqrt(k, r + 1)
*/
int _sqrt(int k, int r)

{
if ((r * r) == k)
return (r);
if (r == k / 2)
return (-1);
return (_sqrt(k, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num
 * Return: _sqrt(n, r)
*/
int _sqrt_recursion(int n)
{
int r = 0;

if (n < 0)
return (-1);
if (n == 1)
return (1);
return (_sqrt(n, r));
}
