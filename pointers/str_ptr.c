
#include <stdio.h>

int main()
{
    char a[]="thundersoft";//str declaration
    char *ptr=&a;
    
    printf("%s\n",a);
    printf("%s\n",ptr);
  printf("%c\n",*ptr);
  int i=0;
  for(i=0;a[i]!='\0';i++)
  {
      printf("%c\n",*ptr++);
      //printf("%c",a[i]);
  }
printf("%  c",a[0]);
printf("%  c",a[1]);
printf("%  c",a[2]);
printf("%  c",a[3]);
printf("%  c",a[4]);
printf("%  c",a[5]);
printf("%  c",a[6]);
printf("%  c",a[7]);
printf("%  c",a[8]);
printf("%  c",a[9]);
printf("%c\n",a[10]);
//printf("%c",*(ptr++));
//printf("%s",*ptr++);
//printf("%c",*ptr++);
return 0;
}
