#include "main.h"
/**
 * print_char - printing for percent
 * @lst: unused argument
 *
 * Return: number of printed characters
 */
int print_percent(va_list lst)
{
(void)lst;
return (write(1, "%", 1));
}
