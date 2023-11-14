#include "main.h"
/**
 * print_int - Function that print integers
 * @ap: variable argument list
 * Return: the number of characters printed
 */
int print_int(va_list ap)
{
int n, x;
int length = 0;
n = va_arg(ap, int);

if (n < 0)
{
_putchar('-');
length++;
n = -n;
}

if (n == 0)
{
_putchar('0');
return (1);
}

x = 1;
while (n / x > 9)
{
x *= 10;
}

while (x > 0)
{
_putchar(n / x + '0');
length++;
n %= x;
x /= 10;
}
return (length);
}
/**
 * print_decimal - Function that print integers
 * @ap: variable argument list
 * Return: the number of characters printed
 */
int print_decimal(va_list ap)
{
long int n, x;
int length = 0;
n = va_arg(ap, long int);

if (n < 0)
{
_putchar('-');
length++;
n = -n;
}
if (n == 0)
{
_putchar('0');
return (1);
}

x = 1;
while (n / x > 9)
{
x *= 10;
}

while (x > 0)
{
_putchar(n / x + '0');
length++;
n %= x;
x /= 10;
}
return (length);
}
