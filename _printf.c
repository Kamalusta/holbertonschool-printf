#include "main.h"
/**
 * _printf - printer function
 * @format: undifened number of arguments
 *
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
int i = 0, j = 0, count = 0, count_fn = 0;
format_t fuct[] = {{'c', print_char}, {'s', print_string}, {'%', print_percent}
, {'d', print_digit}, {'i', print_digit}, {'u', print_unsigned},
{'o', print_octal}, {'x', print_hex_lower}, {'X', print_hex_upper},
{'p', print_pointer}, {'r', print_unknown}, {'b', print_binary}, {'\0', NULL}};
va_list ls;
if (!format || (strlen(format) == 1 && format[i] == '%'))
return (-1);
va_start(ls, format);
while (format[i])
{
if (format[i] == '%')
{
while (fuct[j].type)
{
if (format[i + 1] == fuct[j].type)
{
count_fn += fuct[j].f(ls);
break;
}
j++;
}
if (!fuct[j].type)
{
write(1, &format[i], 1);
count++;
}
else
i++;
j = 0;
}
else
{
write(1, &format[i], 1);
count++;
}
i++;
}
va_end(ls);
return (count_fn + count);
}
