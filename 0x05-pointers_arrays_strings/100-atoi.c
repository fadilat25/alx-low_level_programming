#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
  int i = 0;
  unsigned int ui = 0;
  int min = 1;
  int max = 0;

while (s[i])
{
if (s[i] == 45)
{
min *= -1;
}
while (s[i] >= 48 && s[i] <= 57)
{
max = 1;
ui = (ui * 10) + (s[i] - '0');
i++;
}
if (max == 1)
{
break;
}
i++;
}
ui *= min;
return (ui);
}
