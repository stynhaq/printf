#include "main.h"

/**
 * _printf - This functions prints the (“character,
 * string, float, integer, octal and hexadecimal values”)
 * onto the output screen
 *
 * @format: the format of the characters
 *
 * Return: the characters the function prints
 */


int _printf(const char *format, ...)
{
	va_list args;
	int x = 0, chars = 0;

	va_start(args, format);
	while (format && format[x])
	{
		if (format[x] != '%')
		{
			chars += _putchar(format[x]);
		}
		else if (format[x + 1])
		{
			x++;
			if (format[x] == 'c' || format[x] == 's')
				chars += format[x] == 'c' ? _putchar(va_arg(args, int)) :
				print_str(va_arg(args, char *));
			else if (format[x] == 'd' || format[x] == 'i')
				chars += fs_int(va_arg(args, int));
			else if (format[x] == 'b')
				chars += fs_binary((unsigned int)va_arg(args, int));
			else if (format[x] == 'r')
				chars += fs_reverse(va_arg(args, char *));
			else if (format[x] == 'R')
				chars += fs_rot13(va_arg(args, char *));
			else if (format[x] == 'o' || format[x] == 'u' ||
			format[x] == 'x' || format[x] == 'X')
				chars += fs_odh(format[x], (unsigned int)va_arg(args, int));
			else if (format[x] == 'S')
				chars += fs_S(va_arg(args, char *));
			else if (format[x] == 'p')
				chars += fs_pointer(va_arg(args, void *));
			else
				chars += fs_unknown_spec(format[x]);
		}
		x++;
	}
	va_end(args);
	return (chars);

}
