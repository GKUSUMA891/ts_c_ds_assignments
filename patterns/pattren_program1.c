#include<stdio.h>

int main()
{
    int n,i,j;
    printf("enter no of rows:");
    scanf("%d\n",&n);
    for ( i = 1; i <= n; i++)
    {
        if(i <= n/2)
        {
            for ( j = 0; j < n/2-1; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= i ; j++)
            {
                printf("*");
            }
        }
        else
        {
            for( j = 1;j<=n/2;j++)
            {
               if(j>=i-n/2)
               {
                   printf("*");
               }
               else
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}