#include "main.h"
/**
 * _isdigit - checks if the input is a digit
 * @c: input to be checked
 *
 * Return: if c is a digit,returns 1, returns 0 otherwise
 */

int _isdigit(int c)
{
int i = 0;
if (c >= '0' && c <= '9')
i = 1;
return (i);
}
