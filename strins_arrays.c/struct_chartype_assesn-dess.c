#include <stdio.h>
struct tag
{
    char c[10];

};

int main()
{
    int i,j;
    struct tag s;
    char temp;


    printf("Enter 5 characters to be sorted \n");
    scanf("%s",s.c);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s.c[i]>s.c[j])
            {
                temp=s.c[i];
                s.c[i]=s.c[j];
                s.c[j]=temp;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%c ",s.c[i]);
    }

    return 0;
}
