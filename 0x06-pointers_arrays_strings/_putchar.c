#include <unistd.h>

/**
 * _putchar _ writes the character c to stdout
 * @c: char to be printed
 * Return: 1 on sheikh
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
