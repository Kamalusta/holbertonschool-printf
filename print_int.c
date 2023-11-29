#include "main.h"

/**
 * print_int - printing for integer
 * @lst: Integer to be printed
 *
 * Return: number of printed characters
 */
int print_int(va_list lst)
{
int value = va_arg(lst, int);
char buffer[32];
int len = snprintf(buffer, sizeof(buffer), "%d", value);
return (write(1, buffer, len));
}
