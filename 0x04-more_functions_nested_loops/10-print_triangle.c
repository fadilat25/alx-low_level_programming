#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 *@n: size of triangle
 */
void print_triangle(int n)
{
int i, tri;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (tri = n - i; tri > 0; tri--)
_putchar(' ');
for (tri = 0; tri < i; tri++)
_putchar('#');
if (i == n)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
