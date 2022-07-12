#include "main.h"

/**
 * fs_unknown_spec - prints unknown specifiers
 *
 * @c: character
 *
 * Return: chars
 */
int fs_unknown_spec(char c)
{
	int chars = 0;

	if (c == '%')
	{
		chars += _putchar('%');
	}
	else
	{
		chars += _putchar('%');
		chars += _putchar(c);
	}
	return (chars);
}
