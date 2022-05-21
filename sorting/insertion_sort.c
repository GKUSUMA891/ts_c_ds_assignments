//insertion sort
#include<stdio.h>
void main()
{
    int a[]={5,8,10,33,60};
    int i,j;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++)
    {
        for(j=1;j>n;j--)
        {
            if(a[j]>a[j-1])
            a[j]^=a[j-1]^=a[j]^=a[j-1];
            else
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//5 8 10 33 60

