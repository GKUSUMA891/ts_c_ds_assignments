//string is palindrome r not using functions

#include <stdio.h>
void ispalindrome(char a[])
{
    int i=0,j=0;
    while(a[j]!='\0')
    j++;
    j=j-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        break;
        i++;
        j--;
        
    }
    if(i>=j)
    printf("string is palindrome \n");
    else
    printf("string is not palindrome \n");
}
int main()
{
    char a[]="kusuma";
    ispalindrome(a);
    //printf("Hello World");

    return 0;
}
