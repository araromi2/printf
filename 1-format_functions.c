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
	print_number(num);
	return (count_digits(num));

}

/**
 * print_number - prints an integer.
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');

}

/**
 * count_digits - counts the number of digits in a number
 * @n: number to count
 * Return: number of digits
 */
int count_digits(int n)
{
	int count = 0;

	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
