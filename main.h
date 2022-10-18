#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char);
int _printf(const char *format, ...);
int count_digits(int);
int print_char(va_list);
void print_number(int);
int print_string(va_list);
int print_percent(va_list);
int print_signed_number(va_list);
int print_unsigned_binary(va_list);
int print_unsigned_integer(va_list);
int print_octal_num(va_list);
int print_hex_small(va_list);
int print_hex_large(va_list);
int print_custom_string(va_list);
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
