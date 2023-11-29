#include "main.h"

/**
 * print_hex_upper - printing for unsigned hexadecimal (uppercase)
 * @lst: Unsigned integer to be printed as uppercase hexadecimal
 *
 * Return: number of printed characters
 */
int print_hex_upper(va_list lst)
{
unsigned int value = va_arg(lst, unsigned int);
char buffer[32];
int len = snprintf(buffer, sizeof(buffer), "%X", value);
return (write(1, buffer, len));
}
