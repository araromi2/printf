#include "main.h"

/**
 * print_rev - print reversed string
 * @args: list of arguments
 *
 * Return: number of bytes printed to stdin
 */
int print_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		count += _putchar(str[i]);
	return (count);
}

