#include <stdio.h>
struct stu //struct key word struct tag
{
   int a;   //a,b,c,d,f are the members os diff data types
   char b;
   float c;
   int d;
   char f;
};
void main()
{
    struct stu x;       //accessing struct element
    struct stu *xx=&x;  //accessing pointer element to a struct and holding addr
    x.a=20;            //assigning int data 
    x.b='r';
    x.c=8.9;
    x.d=89;
    xx->a;       //using pointer 
    x.f='g';
    printf("%ld \n",sizeof (x));
    printf("%d\n",length())
    printf("%d %c %f %d  %c \n",x.a,x.b,x.c,x.d,x.f); //using normal elements
    printf("%d %c %f %d %c \n",xx->a,xx->b,xx->c,xx->d,xx->f);//using pointers
    printf("%d %c %f %d %c \n",(*xx).a,(*xx).b,(*xx).c,(*xx).d,(*xx).f);//using pointer with another method
}
