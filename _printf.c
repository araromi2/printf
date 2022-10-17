#include "main.h"

/**
 * _printf - printf function
 * @format: a character string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*ftype)(va_list);
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ftype = get_format_func(format[i + 1]);
			if (ftype == NULL)
			{
				if (format[i + 1] == '\0')
					return (-1);
				count += _putchar(format[i]);
			}
			else
			{
				count += ftype(args);
				i++;
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

