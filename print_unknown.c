#include "main.h"

/**
 * print_unknown - handle unknown specifier
 * @lst: Argument list
 *
 * Return: Number of characters printed
 */
int print_unknown(va_list lst)
{
char *str = va_arg(lst, char *);
if (str == NULL)
str = "(null)";
return (write(1, str, strlen(str)));
}
