#include "main.h"

/**
 * print_char - print char
 * @args: list of arguments
 *
 * Return: 1
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - print string
 * @args: list of arguments
 *
 * Return: the number of bytes of the string.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	return(write(1, str, sizeof(str)));
}

