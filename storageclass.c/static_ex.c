
#include <stdio.h>
int func()
{
    static int a=70;
    a++;
    return a;
}
int main()
{
    //func();
    //func();
    printf("%d ",func());
       printf("%d ",func());
    //return a;
}
