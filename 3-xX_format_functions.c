#include "main.h"
int print_hex(unsigned int);
int print_HEX(unsigned int);

/**
 * print_hex_small - prints in hexadecimal (lowercase)
 * @args: list of arguments
 *
 * Return: the number of bytes printed to stdout
 */
int print_hex_small(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_hex(num));
}

/**
 * print_hex_large - prints in hexadecimal (uppercase)
 * @args: list of arguments
 *
 * Return: the number of bytes printed to stdout
 */
int print_hex_large(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_HEX(num));
}

/**
 * print_hex - convert to hexadecimal (lower) and print
 * @num: the unsigned int passed in
 *
 * Return: the count of bytes printed out
 */
int print_hex(unsigned int num)
{
	int count = 0;

	if (num / 16)
		count += print_hex(num / 16);
	if ((num % 16) < 10)
		count += _putchar((num % 16) + '0');
	else
		count += _putchar((num % 16) + 'a' - 10);
	return (count);
}

/**
 * print_HEX - print a number cnverted to hexadecimal (upper)
 * @num: the unsigned int passed in
 *
 * Return: the count of the bytes printed out
 */
int print_HEX(unsigned int num)
{
	int count = 0;

	if (num / 16)
		count += print_HEX(num / 16);
	if ((num % 16) < 10)
		count += _putchar((num % 16) + '0');
	else
		count += _putchar((num % 16) + 'A' - 10);
	return (count);
}

