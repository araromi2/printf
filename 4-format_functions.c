#include "main.h"

/**
 * print_custom_string - print string
 * @args: list of arguments
 * Non printable characters are printed \x, followed by the ASCII code value
 * in hexadecimal (upper case - always 2 character)
 *
 * Return: the number of bytes printed
 */
int print_custom_string(va_list args)
{
	char *str = va_arg(args, char *);
	char *hex = "0123456789ABCDEF";
	int i, count = 0;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(hex[str[i] / 16]);
			count += _putchar(hex[str[i] % 16]);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}

