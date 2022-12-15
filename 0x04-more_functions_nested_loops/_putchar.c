#include <unistd.h>
#include "main.h"

/**
 * putchar - writes a character to stdout
 *@c: the character to be printed 
 *
 *Return: if successful 1 else -1
 */
int _putchar(char c)
{
return (write (1, &c, 1));
}
