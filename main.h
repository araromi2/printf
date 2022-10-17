#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int (*get_format_func(char s))(va_list);

/**
 * struct format_type - struct format_type
 * @type: format type
 * @func: function to use to print
 */
typedef struct format_type
{
	char type;
	int (*func)(va_list);
} format_t;

#endif /* #ifndef _MAIN_H */
