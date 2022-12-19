#include <unistd.h>
/**
 * _putchar - writes character to stdout
 *@c: character to be printed
 *Return: if successful, returns 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
