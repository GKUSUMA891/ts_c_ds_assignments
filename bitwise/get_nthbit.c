// program to get nth bit of a number.
#include <stdio.h>

int main()
{
    int a=141,n;
    int b=a&(1<<n);
    if(b)
    {
    printf("nth bit of a number is one");
    }
    else
    {
        printf("nth bit of a number is zero");    
    }
    
    

    return 0;
}
