#include "main.h"
/**
 *leet - function that chanfunction that encodes a string into 1337.
 *i - int
 *j - int
 *@num: string
 *Return: Num
*/
char *leet(char *num);
{
int i = 0;
int j = 0;
char a[] = "aAeEoOtTlL";
char a[] = "4433007711";
while (num[i])
{
j = 0;
while (j < 10)
{
if (num[i] == a[j])
{
num[i] = b[j];
}
j++
}
i++
}
return (num);
}
