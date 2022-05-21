
#include <stdio.h>
int *ptr;

int main()
{
    int n=5,i;
    printf("enter elements %d\n",n);
    //scanf("%d\n",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory is not allocated");
    }
    else
    {
        printf("memory allocated successfully:");
        
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
            printf("%d ",ptr[i]);
            
        }
    }
    
    //printf("Hello World");

    return 0;
}

