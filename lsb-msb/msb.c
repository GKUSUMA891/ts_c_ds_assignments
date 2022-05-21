// program to check Most Significant Bit (MSB) of a number is set or not.
#include <stdio.h>

int main()
{
    char a=800;
    if(a&(1<<7))
    {
        printf("set is MSB\n");
    }
    else
    {
        printf("set is not MSB\n");
    }
    
    int b=800;
    if(b&(1<<31))
    {
        printf("set is MSB\n");
    }
    else
    {
        printf("set is not MSB\n");
    }
    return 0;
}
