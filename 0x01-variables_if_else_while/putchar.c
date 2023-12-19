#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'H';

    write(1, &c, 1);

    return (0);
}

