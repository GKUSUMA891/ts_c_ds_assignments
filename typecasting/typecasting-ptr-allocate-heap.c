
#include <stdio.h>
#include<stdlib.h>
int a=8;//global var stored in data segment
float b=7;
char c[20];//global var stored in data segment
int main()
{
    //int a=90;//4 //local var stored in stack segment
    //float b=9.6;//4 //local stack
    //char c;
    double c=(double) a/b/c;
    double *ptr=&c;
    //ptr=(double) a/b;
    ptr=(double *)malloc(sizeof(c));
    
    printf("%zu\n",c);
    //printf("Hello World");

    return 0;
}

