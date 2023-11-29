#include "main.h"

/**
 * print_unsigned - printing for unsigned integer
 * @lst: Unsigned integer to be printed
 *
 * Return: number of printed characters
 */
int print_unsigned(va_list lst)
{
unsigned int value = va_arg(lst, unsigned int);
char buffer[32];
int len = snprintf(buffer, sizeof(buffer), "%u", value);
return (write(1, buffer, len));
}
