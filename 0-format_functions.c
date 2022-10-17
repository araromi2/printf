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
	int count = 0, i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		count += _putchar(str[i++]);
	}
	return (count);
}

/**
 * print_percent - print percent
 * @ args: list of arguments
 * Return: 1
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}

