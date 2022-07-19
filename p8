#include<stdio.h>
int main()
{
	int i,j,n=5,num;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			num++;
    			printf(" %d",num);
		}
		printf("\n");
	}
}
