#include "main.h"
/**
 * fs_S - prints a string with custom formatting
 *
 * @str: string to be formatted
 *
 * Return: number of chars printed
 */
int fs_S(char *str)
{
	int i = 0, chars = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if ((c > 0 && c  < 32) || c >= 127)
		{
			chars += _putchar('\\');
			chars += _putchar('x');
			chars += _putchar('0');
			chars += print_odh('X', (unsigned int)c);
		}
		else
		{
			chars += _putchar(c);
		}
		i++;
	}
	return (chars);
}
