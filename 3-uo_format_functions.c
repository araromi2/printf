#include "main.h"
int print_notsigned_(unsigned int);
int print_octal(unsigned int);

/**
 * print_unsigned_integer - print unsigned integer
 * @args: list of arguments
 *
 * Return: the number of bytes printed to stdout.
 */
int print_unsigned_integer(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_notsigned_(num));
}

/**
 * print_octal_num - print octal number
 * @args: list of arguments
 *
 * Return: the number of bytes printed to stdout
 */
int print_octal_num(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_octal(num));
}

/**
 * print_notsigned_ - print an unsigned number
 * @num: number passed in
 *
 * Return: number of bytes printed
 */
int print_notsigned_(unsigned int num)
{
	int count = 0;

	if (num / 10)
		count += print_notsigned_(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}

/**
 * print_octal - print octal conversion
 * @num: unsigned number passed in
 *
 * Return: the number of bytes printed to stdout
 */
int print_octal(unsigned int num)
{
	int count = 0;

	if (num / 8)
		count += print_octal(num / 8);
	count += _putchar((num % 8) + '0');
	return (count);
}

