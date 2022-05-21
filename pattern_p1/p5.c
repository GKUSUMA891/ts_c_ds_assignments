#include <stdio.h>  
  
int main()  
{  
    int n;  
    printf("Enter the number of rows:");  
    scanf("%d",&n);
    int i,j;
    for( i=1;i<=n;i++)  
    {  
        for( j=i;j>=1;j--)  
        {  
            printf("%d ",j);  
        }  
        printf("\n");  
    }  
    return 0;  
}
/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1
*/