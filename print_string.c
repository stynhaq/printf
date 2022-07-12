#include "main.h"
/**
  *print_str - p
  *@str: - pointer to char.
  *
  *Return: - returns int.
  */
int print_str(char *str)
{
	int chars = 0;

	if (str == (char *)0)
		return (print_str("(null)"));
	while (str && str[chars])
	{
		_putchar(str[chars]);
		chars++;
	}
	return (chars);
}
