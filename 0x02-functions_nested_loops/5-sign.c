#include "main.h"

/**
 *print_sign - prints
 *
 *@n = parameter
 *
 *Return: returns 0, 1, -1, based on conditions given
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
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
