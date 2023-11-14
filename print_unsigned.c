#include "main.h"

/**
 * print_unsigned - Function that print
 * unsigned int
 * @ap: variable argument list
 * Return: the length of numbers printed
 */
int print_unsigned(va_list ap)
{
unsigned int x;
int len = 0;
char u[10];
int i, j;
x = va_arg(ap, unsigned int);

if (x == 0)
{
_putchar('0');
len++;
}
else
{
for (j = 0; x > 0; j++)
{
u[j] = ((x % 10) + '0');
x /= 10;
}

for (i = j - 1; i >= 0; i--)
{
_putchar(u[i]);
len++;
}
}

return (len);
}
