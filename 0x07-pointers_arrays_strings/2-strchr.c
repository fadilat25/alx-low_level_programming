#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: character to look for
 * @s: string ot search
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
