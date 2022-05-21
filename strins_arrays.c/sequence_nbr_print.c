#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter number \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=i;
        while(j>0)
        {
            printf("%d ",i);
            j--;
        }
        //j=0;
    }
}