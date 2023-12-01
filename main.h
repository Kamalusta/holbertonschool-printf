#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
int _printf(const char *format, ...);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hex_lower(va_list);
int print_hex_upper(va_list);
int print_pointer(va_list);
int print_unknown(va_list);
int print_binary(va_list);
/**
 * struct _format - struct for printing
 * @type: type of data
 * @f: function to print
 *
 */
typedef struct _format
{
char type;
int (*f)(va_list);
} format_t;
#endif /* MAIN_H */
