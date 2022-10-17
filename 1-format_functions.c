#include "main.h"
int print_number(int);

/**
 * print_signed_number - prints a signed integer.
 * @n: args
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
 * @num: integer
 *
 * Return: count of integer
 */
int print_number(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num  *= -1;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	count += _putchar((num % 10) + '0');
	return (count);

}

