#include<stdio.h>
main()
{
    float area,circum,r,pi=3.14;
    int choice;
    printf("Enter 1 to know area of circle or 2 to know circumference of a circle\n");
    scanf("%d",&choice);
    if((choice==1)||(choice==2))
    {
        printf("Enter radius\n");
        scanf("%f",&r);
    }
    switch(choice)
    {
    case 1:
        area=(pi*r*r);
        printf("area is %f",area);
        break;

    case 2:
        circum=(pi*r*2);
        printf("circumference of circle  is %f",circum);
        break;

    default:
        printf("Invalid choice");
    }
}








