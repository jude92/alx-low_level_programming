#include "main.h"

/**
 * print_last_digit - function to print last digit
 * @n: function parameter
 * Return: always 0
 */

int print_last_digit(int n)

{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit = -lastdigit;
_putchar('0' + lastdigit);
return (lastdigit);
}

