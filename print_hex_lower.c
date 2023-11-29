#include "main.h"

/**
 * print_hex_lower - printing for unsigned hexadecimal (lowercase)
 * @lst: Unsigned integer to be printed as lowercase hexadecimal
 *
 * Return: number of printed characters
 */
int print_hex_lower(va_list lst)
{
unsigned int value = va_arg(lst, unsigned int);
char buffer[32];
int len = snprintf(buffer, sizeof(buffer), "%x", value);
return (write(1, buffer, len));
}
