#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of rows:\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c ",(char)(j+96));
        }
        printf("\n");
    }
}
/*
a 
b a 
c b a 
d c b a 
e d c b a 
*/