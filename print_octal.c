#include "main.h"

/**
 * print_octal - printing for unsigned octal
 * @lst: Unsigned integer to be printed as octal
 *
 * Return: number of printed characters
 */
int print_octal(va_list lst)
{
unsigned int value = va_arg(lst, unsigned int);
char buffer[32];
int len = snprintf(buffer, sizeof(buffer), "%o", value);
return (write(1, buffer, len));
}
