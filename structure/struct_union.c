
#include <stdio.h>
struct abc
{
    int a;
    float b;
   union uni
   {
     int a11;
     char b11;
    } un;
 };

int main ()
{
  struct abc a1;
  a1.a = 78;
  a1.b = 7.9;
  a1.un.a11 = 90;
  a1.un.b11 = 'a';
  printf ("%d\n", a1.a);
  printf ("%f\n", a1.b);
  printf ("%d\n", a1.un.a11);
  printf ("%c\n", a1.un.b11);
  printf("sizeof %zu \n",sizeof(union uni));
  printf("sizeof %zu",sizeof(a1));
  

  //printf ("Hello World");

  return 0;
}
