#include "main.h"

/**
 * get_format_func - selects the correct function for the format requested by
 * the user
 * @s: the format.
 *
 * Return: A pointer to the function that will print in the format specified
 */
int (*get_format_func(char *s))(va_list)
{
	format_t f_types[] = {
		{'c', print_char},
		{'s', print_string},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 2)
	{
		if (s == f_types[i].type)
			return (f_types[i].func);
		i++;
	}
	return (NULL);
}

