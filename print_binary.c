#include "main.h"
int print_binary(va_list lst)
{
  unsigned int i, p, m, n;
  char* arr;
  m = va_arg(lst, unsigned int);
  n = m;
    while(m)
    {
    m/=2;
    i++;
    }
    arr=malloc(i);
   for (;n>0;i--)
   {
       p = n%2;
       n = n/2;
       arr[i-1] ='0'+ p;
   }
   return (write(1, arr, strlen(arr)));
}
