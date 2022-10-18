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
		{'b', print_unsigned_binary}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (f_types[i].type == s)
			return (f_types[i].func);
		i++;
	}
	return (NULL);
}

