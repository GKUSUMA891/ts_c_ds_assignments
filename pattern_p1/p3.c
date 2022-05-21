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
            printf("%d ",i);  
        }  
        printf("\n");  
    }  
    return 0;  
}
/*
6 
5 5 
4 4 4 
3 3 3 3 
2 2 2 2 2 
1 1 1 1 1 1
*/