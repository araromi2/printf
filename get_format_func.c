#include "main.h"

/**
 * get_format_func - selects the correct function for the format requested by
 * the user
 * @s: the format.
 *
 * Return: A pointer to the function that will print in the format specified
 */
int (*get_format_func(char s))(va_list)
{
	format_t f_types[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_signed_number},
		{'i', print_signed_number},
		{'b', print_unsigned_binary},
		{'u', print_unsigned_integer},
		{'o', print_octal_num},
		{'x', print_hex_small},
		{'X', print_hex_large},
		{'S', print_custom_string},
		{'p', print_pointer},
		{'r', print_rev},
		{'R', print_rot}
	};
	int i;

	i = 0;
	while (i < 14)
	{
		if (f_types[i].type == s)
			return (f_types[i].func);
		i++;
	}
	return (NULL);
}

