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
	if (!num)
		return (_puts("(nil)"));
	count += _puts("0x");
	count += print_hex(num);
	return (count);
}

