#include<stdio.h>
void swap(int x,int y);
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("\n Before swapping \n");
	printf("Value of x= %d",x);
	printf("\nValue of y= %d",y);
	swap(x,y);
	printf("\n\n After swapping \n");
	printf("Value of x= %d",x);
	printf("\nValue of y= %d",y);
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("\n\n Inside swap function \n");
	printf("Value of x= %d",x);
	printf("\nValue of y= %d",y);
}
