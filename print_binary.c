#include "main.h"
/**
 * print_binary - printer function
 * @lst: undifened number of arguments
 *
 * Return: number of characters
 */

int print_binary(va_list lst)
{
unsigned int i = 0, p, m, n;
char *arr;
char k = '0';

m = va_arg(lst, unsigned int);
n = m;
if (m == 0)
{
return (write(1, &k,  1));
}
while (m)
{
m /= 2;
i++;
}
arr = malloc(i);
if (arr == NULL)
return (0);
for (; n > 0; i--)
{
p = n % 2;
n = n / 2;
arr[i - 1] = '0' + p;
}
i = write(1, arr, strlen(arr));
free(arr);
return (i);
}
