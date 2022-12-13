#include <stdio.h>
/**
 *main-prints base16 nums as alphabets
 *
 * Return: (0)
 *
 */
int main(void)
{
char c;
int i;
c = 'a';
while
(i < 10)
{
putchar(i + '0');
i++;
}
while
(c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
