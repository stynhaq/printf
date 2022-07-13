#include "main.h"

/**
 * fs_pointer - prints a pointer
 *
 * @p: pointer to be printed
 *
 * Return: number of characters printed
 */
int fs_pointer(void *p)
{
	int chars = 0;

	chars += print_str("0x");
	chars += fs_odh('x', (unsigned long int)p);
	return (chars);
}
