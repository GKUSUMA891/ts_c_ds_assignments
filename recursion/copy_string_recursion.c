
#include <stdio.h>
void copyarray(char a[])
{
    char b[40];
    int i=0;
    while(1)
    {
        b[i]=a[i];
        if(b[i]=='\0')
        break;
        i++;
    }
    printf("copied string is:%s ",b);
}
void  main()
{
    char a[]="thundersoft";
    copyarray(a);

    //return 0;
}
