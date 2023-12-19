#include "main.h"
/**
 * print_sign - function to print sign of a variable
 * @n: function parameter
 * Return: Always 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
