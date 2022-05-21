#include<stdio.h>
 
void main()
{
    int i,j,k=1,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%c ",(char)(k+96));   
        }
        printf("\n");
    }
}
/*
a 
b c 
d e f 
g h i j 
k l m n o
/*