#include "main.h"
int print_binary(unsigned int, unsigned int);

/**
 * print_unsigned_binary - convert unsigned int argument to binary and print
 * @args: list of argument
 *
 * Return: the count of the byte printed
 */
int print_unsigned_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_binary(num, 0));
}

/**
 * print_binary - print converted integer (to binary)
 * @num: number
 * @count: count of bytes printed
 *
 * Return: the byte count
 */
int print_binary(unsigned int num, unsigned int count)
{
	if (num / 2)
	{
		count++;
		count = print_binary(num / 2, count);
	}
	_putchar(num % 2 + '0');
	return (count);
}

