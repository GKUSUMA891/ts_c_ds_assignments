1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;

o/p:p2  is pointer

2)  In the following code what is 'P'?
typedef char *charp;
const charp P;

o/p:p is pointer to const

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
o/p:x is invalid initializer

4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 

o/p:array pointer

5) What is pf in the below statement?
typedef int (*pf)(int);

o/p:function pointer
