#include "main.h"
/**
 * print_digitt - printing for integer
 * @lst: Integer to be printed
 *
 * Return: number of printed characters
 */

int print_digit(va_list lst)
{
 long int k,len,j=0,pint,digit;
    char *arr;
   long int num = va_arg(lst, int);
    if (num ==0)
      {
	write(1,"0",1);
    return (1);
      }
    if (num<0)
    pint = -10 * num;
    else
    pint = num;
    for (k=0;pint>0;k++)
    pint=pint/10;
    len = k;
    arr = malloc(len);
    while(k>j)
    {
      if(num<0)
        {
        num = -1 * num;
        arr[0] = '-';
        j++;
        }
    digit=num%10;
    arr[k-1] ='0' + digit;
    num=num/10;
    k--;
    }
j = write(1,arr,len);
free(arr);
    return (j);
}
