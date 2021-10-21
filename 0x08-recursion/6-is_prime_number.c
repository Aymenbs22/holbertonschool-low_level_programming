#include "main.h"
/**
 * prm - function that prints a string in reverse
 *@n: num!
 *i: char
 *@i: char
 * Return: (prm(i + 1, n))
*/
int prm(int i, int n)

{
if (n < 2)
return (0);
if (n % i == 0)
return (0);
if (i > n / 2)
return (1);
return (prm(i + 1, n));
}
/**
 * is_prime_number - function that returns 1
 * @n: num
 * Return: (is_it_prm(2, n))
*/
int is_prime_number(int n);
{
return (is_it_prm(2, n));
}
