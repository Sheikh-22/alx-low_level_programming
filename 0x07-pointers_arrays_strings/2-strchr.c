#include "main.h"
#include <stddef.h>

/**
 * _strchar - locates a character
 * @s: the string we look thru
 * @c: the charater we look for
 *
 * Return: a pointer to the char or HULL
 *
 */
char *_strchar(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
