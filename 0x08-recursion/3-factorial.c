#include "main.h"
/**
 * factorial - factorial of an integer
 * @n: integer
 * Return: x
 */
int factorial(int n)
{
int x;
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
x = n * factorial(n - 1);
}
return (x);
}
