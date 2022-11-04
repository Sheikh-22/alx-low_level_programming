#include "main.h"

/**
 * _put_recursion - prints a string
 * @s: pointer block of memory to fill
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}
