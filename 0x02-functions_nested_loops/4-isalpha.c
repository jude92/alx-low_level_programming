#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: function parameter
 * Return: Always 0
 */

int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
