//program to clear nth bit of a number.

#include <stdio.h>

int main()
{
    int a=125,n;
    int b= a & (~(1<<n));
    printf("nth clear bit is:%d\n",b);
    
    int y= a&(~(1<<n));  ///  clear a bit 133
      printf("nth clear bit is:%d\n",y);

    return 0;
}
