#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by a comma and space
 * Return: 0
 */
int main(void)
{
unsigned long int a = 1, b = 2, next;
int count;

printf("%lu, %lu", a, b);

 for (count = 2; count < 98; ++count)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

printf("\n");

return (0);
}

