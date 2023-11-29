#include "main.h"
/**
 * print_char - printing for char
 * @lst: String to be copied
 *
 * Return: number of printed characters
 */
int print_char(va_list lst)
{
char q = va_arg(lst, int);
return (write(1, &q, 1));
}
