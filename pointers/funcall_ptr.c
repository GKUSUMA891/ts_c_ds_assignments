#include <stdio.h>

int main()
{
    int a=10,b=20,c,d,e,f,h=10,i=20;

    int *ptr1=&h,*ptr2=&i;


    int arr[]={20,30,10,50,70};

    int *ptr3=arr;

    fun(a,b);
    fun1(*ptr1,*ptr2);

    fun2(&ptr1,&ptr2);

    fun3(&arr[0]);  /// passing base address array's 1st element
    fun4(arr);  /// passing base address array's 1st element

    fun5(ptr3);    //  passing pointer i.e., base address of array 

    return 0;
}

void fun5(int *ptr)
{
    printf("fun 5\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }

}

void fun3(int arr[])         //Fun def for printing array values using array[]
{
    printf("fun 3\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void fun4(int *ptr)    ///Fun def for printing array values using pointer
{
    printf("fun 4\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}


void fun(int x,int y)
{
    x=x+y;
    printf("Normal call %d\n",x);
}

void fun1(int h,int i)
{
    h=h+i;
    printf(" Call by pointers is %d \n",h);
}

void fun2(int **h,int **j)
{
    **h=**h+**j;
    printf(" Call by addresses of pointers is %d \n",**h);
}