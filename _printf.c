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
, {'d', print_int}, {'i', print_int}, {'u', print_unsigned},
{'o', print_octal}, {'x', print_hex_lower}, {'X', print_hex_upper},
{'p', print_pointer}, {'r', print_unknown}, {'\0', NULL}};
va_list ls;
va_start(ls, format);
while (format[i])
{
if (format[i] == '%')
{
if (strlen(format) == 1)
return (-1);
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
