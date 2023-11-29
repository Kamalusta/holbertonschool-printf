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
