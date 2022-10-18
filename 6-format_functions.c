#include "main.h"

/**
 * print_pointer - print the address of a pointer
 * @args: list of arguments
 *
 * Return: the number of bytes printed to stdout
 */
int print_pointer(va_list args)
{
	unsigned long int num;

	int count = 0;

	num = (unsigned long int)(va_arg(args, void *));
	count += _putchar('0');
	count += _putchar('x');
	count += print_hex(num);
	return (count);
}

