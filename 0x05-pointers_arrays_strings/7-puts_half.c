#include "main.h"

/**
 * puts_half - prints one half of a string
 *
 *@str: input
 */
void puts_half(char *str)
{
int line = 0;
while (*str != '\0')
{
line++;
str++;
}
str -= (line / 2);
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
