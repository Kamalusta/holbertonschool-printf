#include "main.h"
/**
 * print_string - printing for char
 * @lst: String to be copied
 *
 * Return: number of printed characters
 */
int print_string(va_list lst)
{
char *w = va_arg(lst, char*);
return (write(1, w, strlen(w)));
}
/**
 * _printf - printer function
 * @format: undifened number of arguments
 *
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
int i = 0, j = 0, count = 0;
format_t fuct[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{'d', print_int},
{'i', print_int},
{'u', print_unsigned},
{'\0', NULL}
};
va_list ls;
va_start(ls, format);
while (format[i])
{
if (format[i] == '%')
{
while (fuct[j].type)
{
if (format[i + 1] == fuct[j].type)
fuct[j].f(ls);
j++;
}
j = 0;
i++;
count++;
}
else
write(1, &format[i], 1);
i++;
}
va_end(ls);
return (i - count);
}
