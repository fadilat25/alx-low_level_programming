#include "main.h"
/**
 * print_line - prints a straight line
 *@n: the number of dashes
 */
void print_line(int n)
{
int lin;
if (n > 0)
{
for (lin = 0; lin < n; lin++)
_putchar('_');
}
_putchar('\n');
}
