#include "main.h"

/**
 * _memcpy - copies @n bytes from one memory area to another
 *
 * @n: function copies
 *
 * @src: first memory area
 *
 * @dest: second memory area
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
