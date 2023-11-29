#include "main.h"
/**
 * print_string - printing for char
 * @lst: String to be copied
 *
 * Return: number of printed characters
 */
int print_string(va_list lst)
{
char* w = va_arg(lst, char*);
if (!w)
{
char* sw = "(null)";
write(1,sw,strlen(sw));
return (6);
}
else
return (write(1,w,strlen(w)));
}
