#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines:\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",(char)(j+96));
        }
         printf("\n");
    }
}
/*
e 
d e 
c d e 
b c d e 
a b c d e 
/*
