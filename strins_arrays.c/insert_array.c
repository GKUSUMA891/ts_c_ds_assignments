#include <stdio.h>

int main()
{
    int arr[10]={10,20,30,40,50},n,i,j;

    printf("Enter the position number\n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(i==n)
        {
            for(j=5;j>i;j--)
            {
                arr[j+1]=arr[j];
            }

            arr[n]=100;

        }
    }

    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
