
#include <stdio.h>
void convert(int a);//fun declaration
void convert(int a) //fun defination
{
    int temp=a;
    int b=a%2;
    printf("%d ",b);
    a=a/2;
    if(a>0)
    {
     convert(a); //recursion //fun call
    }
}
void main()
{
    int a=20;
//convert(a);
if(a>0)
{
    convert(a); //fun call
}
}
