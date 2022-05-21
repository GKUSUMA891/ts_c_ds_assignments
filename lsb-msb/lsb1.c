//program to check Least Significant Bit (LSB) of a number is set or not.
#include <stdio.h>

int main()
{
    int a=345;
    if(a&1)
    {
        printf("set is LSB");
    }
    else
    {
        printf("set is not LSB");
    }

    return 0;
}
`