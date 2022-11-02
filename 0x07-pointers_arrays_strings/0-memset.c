#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: memory area
 * @b: bytes
 * @n: number of bytes
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
*ptr++ = b;

	return (0);
}
