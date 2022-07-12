#include "main.h"

/**
 * _printf - This functions prints the (“character, 
 * string, float, integer, octal and hexadecimal values”) 
 * onto the output screen
 *
 * @format: the format of the characters
 * @
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
			else if (format[x] == 'd' || format[x] == 'x')
				chars += int_fs(va_arg(args, int));
			else if (format[x] == 'b')
				chars += print_binary((unsigned int)va_arg(args, int));
			else if (format[x] == 'r')
				chars += print_reverse(va_arg(args, char *));
			else if (format[x] == 'R')
				chars += print_rot13(va_arg(args, char *));
			else if (format[x] == 'o' || format[x] == 'u' ||
			format[x] == 'x' || format[x] == 'X')
				chars += print_odh(format[x], (unsigned int)va_arg(args, int));
			else if (format[x] == 'S')
				chars += print_S(va_arg(args, char *));
			else if (format[x] == 'p')
				chars += print_pointer(va_arg(args, void *));
			else
				chars += print_unknown_spec(format[x]);
		}
		x++;
	}
	va_end(args);
	return (chars);

}
