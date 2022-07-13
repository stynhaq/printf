#include "main.h"

/**
 * dec_to_oct - converts decimal to octal notation
 *
 * @num: number to be converted
 * Return: characters printed
 */
int dec_to_oct(unsigned int num)
{
	int chars = 0;

	if (!num)
		return (0);
	chars += (dec_to_oct(num / 8));
	chars += _putchar('0' + num % 8);
	return (chars);
}

/**
 * dec_to_hex - converts decimal to hexadecimal notation
 *
 * @c: letter case specifier
 * @num: number to be converted
 * Return: characters printed
 */
int dec_to_hex(char c, unsigned int num)
{
	int chars = 0;

	if (!num)
		return (0);
	chars += dec_to_hex(c, num / 16);
	if (num % 16 < 10)
		chars += _putchar('0' + num % 16);
	else if (num % 16 > 9 && c == 'x')
		chars += _putchar(87 + num % 16);
	else
		chars += _putchar(55 + num % 16);
	return (chars);
}

/**
 * fs_odh - prints a number in its octal, decimal or hex representation
 *
 * @c: type to be converted into
 * @num: number to be converted
 * Return: characters printed
 */
int fs_odh(char c, unsigned int num)
{
	int chars = 0;

	if (c == 'u')
		chars += fs_int(num);
	else if (c == 'o' && num == 0)
		chars = print_str("00");
	else if (c == 'o')
		chars += dec_to_oct(num);
	else if ((c == 'x' || c == 'X') && num == 0)
		chars += print_str("00");
	else
		chars += dec_to_hex(c, num);
	return (chars);
}
