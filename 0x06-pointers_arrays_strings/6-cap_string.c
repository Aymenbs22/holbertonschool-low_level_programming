#include "main.h"
/**
 *cap_string - function that changes all lowercase letters to uppercase
 *@cha: int
 * Return: cha
*/
char *cap_string(char *cha)
{
int i = 0;
while (cha[i])
{
while (!(cha[i] >= 'a' && cha[i] <= 'z'))
i++;
if (cha[i - 1] == ' ' ||
if cha[i - 1] == '\t' ||
if cha[i - 1] == '\n' ||
if cha[i - 1] == ';' ||
if cha[i - 1] == ',' ||
if cha[i - 1] == '.' ||
if cha[i - 1] == '?' ||
if cha[i - 1] == '!' ||
if cha[i - 1] == '"' ||
if cha[i - 1] == '(' ||
if cha[i - 1] == ')' ||
if cha[i - 1] == '{' ||
if cha[i - 1] == '}' ||
i == 0)
cha[i] -= 32;
i++;
}
return(cha)
}
