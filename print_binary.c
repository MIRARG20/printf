#include "main.h"
/**
 * print_binary - Function that convert
 * numbers to binary
 * @ap: variable argument list
 * Return: the length of numbers printed
 */

int print_binary(va_list ap)
{
unsigned int num;
int i;
int j;
char s[32];
int length = 0;

num = va_arg(ap, unsigned int);
if (num == 0)
{
putchar('0');
return (1);
}

for (i = 0; num > 0; i++)
{
s[i] = num % 2 + '0';
num /= 2;
}

j = i - 1;
while (j >= 0)
{
putchar(s[j]);
length++;
j--;
}
return (length);
}
