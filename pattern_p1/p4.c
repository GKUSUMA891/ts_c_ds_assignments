#include <stdio.h>  
  
int main()  
{  
    int n;  
    printf("Enter the number of rows:");  
    scanf("%d",&n);
    int i,j;
    for( i=n;i>=1;i--)  
    {  
        for( j=n;j>=i;j--)  
        {  
            printf("%d ",j);  
        }  
        printf("\n");  
    }  
    return 0;  
}
/*
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1
*/