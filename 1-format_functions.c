#include "main.h"

/**
 * print_signed_number - prints a signed integer.
 * @args: args
 *
 * Return: number of character printed.
 */
int print_signed_number(va_list args)
{
	int num;

	num = va_arg(args, int);
	return (print_number(num));

}

/**
 * print_number - prints an integer.
 * @n: integer
 *
 * Return: count of integer
 */
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
		num = n;
	if (num / 10)
	{
		count += print_number(num / 10);
	}
	 _putchar((num % 10) + '0');
	return (count);

}

