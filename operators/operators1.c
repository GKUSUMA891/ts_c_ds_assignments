//Program to explain all opeartors using different data types.
#include <stdio.h>
int main()
{
    int num1=25,num2=30;
    int result;
    //float a=6.5,b=3.4;
    //float result1;
    printf("arithmetic operator");
    result=num1+num2;
    printf("addition of two integer data types are:%d\n ",result);
    result=num1-num2;
    printf("subtraction of two integer data types are:%d\n ",result);
    result=num1*num2;
    printf("multiplication of two integer data types are:%d\n ",result);
    result=num1/num2;
    printf("division of two integer data types are:%d\n ",result);
    result=num1%num2;
    printf("addition of two integer data types are:%d\n ",result);
    result=num1^num2;
    printf("power of two integer data types are:%d\n ",result);
    float a=6.5,b=3.4;
    float result1;
    printf("relational operator");
    if(a==b)
    printf("float a and b are equal");
    else
    printf("float a and b are not equal\n");
    if(a!=b)
    printf("float a and b are  not equal\n");
    else
    printf("float a and b are  equal\n");
    if(a<b)
    printf("float a is less than  b\n");
    else
    printf("float a is not less than b\n");
    if(a>b)
    printf("float a is greater than b\n");
    else
    printf("float a is not greater than b\n");
     if(a<=b)
    printf("float a is less than are equal to b\n");
    else
    printf("float a is not less than b\n");
    if(a>=b)
    printf("float a is greater than are equal to b\n");
    else
    printf("float a is not greater than b\n");
    
    printf("logical operators\n");
    
    char m,c;
    m=c;
    int n=23;
    if((m==c) && (n>34))
         printf(" AND condition is true\n");
    else
         printf(" AND condition is not true\n");
    if((m==c) || (n==23))
     printf("OR condition is true\n");
    else
         printf("OR condition is false\n");
    if(!m==c)
    printf("true\n");
    else
    printf("false\n");
    
    
    return 0;
}
