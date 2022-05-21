#include <stdio.h>
int main()
{
    static int a=90;//static keyword
     int b=40;  //defaults take auto(garbagevalue)
     int *ptr=&a;
    printf("befor changing %d\n",a);
     a=b;
    printf("after changing %d\n",b);
    //static int a;
    //static not allows the redeclaration
    a=48;
     b=87;   
    printf("befor changing %d\n",a);
     b=*ptr;
    printf("after changing %d",b);
    return 0;
}
