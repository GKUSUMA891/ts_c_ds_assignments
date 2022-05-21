//to find weather the bit is one/zero
#include <stdio.h>

int main()
{
    int a=800;
    if(a&(1<<9))//left shift
    {
        printf("bit is one\n");
    }
    else
    {
        printf("bit is zero\n");
    }
    
    if(a|(1<<9))
        {
            printf("bit is one\n");
        } 
    else
    {
        printf("bit is zero\n");
        
    }
    return 0;
}
