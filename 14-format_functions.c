#include "main.h"

/**
 * print_rot - prints the rot13'ed string
 * @args: list of arguments
 *
 * Return: length of the bytes printed out
 */
int print_rot(va_list args)
{
	char *s = va_arg(args, char *);
	int i, count = 0;
	char *rot13_l = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13_s = "nopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			count += _putchar(rot13_l[s[i] - 'A']);
		else if (s[i] >= 'a' && s[i] <= 'z')
			_putchar(rot13_s[s[i] - 'a']);
		else
			count += _putchar(s[i]);
	}
	return (count);
}

