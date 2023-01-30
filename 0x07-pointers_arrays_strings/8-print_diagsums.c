#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, c, d = 0, e = 0;
for (i = 0; i < size; i++)
{
c = (i * size) + i;
d += *(a + c);
}
for (j = 0; j < size; j++)
{
c = (j * size) + (size - 1 - j);
e += *(a + c);
}
printf("%i, %i\n", d, e);
}
