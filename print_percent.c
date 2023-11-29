#include "main.h"
/**
 * print_percent - printing for percent
 * @lst: Unused argument
 *
 * Return: number of printed characters
 */
int print_percent(va_list lst)
{
(void)lst;
return (write(1, "%", 1));
}
