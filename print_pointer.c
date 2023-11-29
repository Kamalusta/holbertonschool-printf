#include "main.h"

/**
 * print_pointer - printing for pointer
 * @lst: Pointer to be printed
 *
 * Return: number of printed characters
 */
int print_pointer(va_list lst)
{
void *ptr = va_arg(lst, void *);
char buffer[32];
int len = snprintf(buffer, sizeof(buffer), "%p", ptr);
return (write(1, buffer, len));
}
