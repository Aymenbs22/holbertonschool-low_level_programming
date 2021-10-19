#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers
 *@a: int
 *@n : num
 *i - 0
*/
void reverse_array(int *a, int n)
{
int i = n, j = 0, x;
i -= 1;
while (j < i)
{
x = a[i];
a[i] = a[j];
a[j] = x;
i--;
j++;
}
}
