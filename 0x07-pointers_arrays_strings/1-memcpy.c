#include "main.h"

/**
 * _memest: fills memory with constant byte
 * @s: memory area
 * @b: bytes
 * @n: number of bytes
 *
 * Return: ponlinter to s
 */

char *_memest(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
*ptr++ = b;
return (s);
}
