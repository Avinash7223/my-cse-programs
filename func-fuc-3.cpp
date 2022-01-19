/*3. Return maximum of given two numbers*/

#include<stdio.h>
int max(int,int);
int main()
{
	int a,b;
	printf("Enter the number1:");
	scanf("%d",&a);
	printf("Enter the number2:");
	scanf("%d",&b);
	max(a,b);
}
int max(int x,int y)
{
	if(x>y)
	{
		printf("%d is highest",x);
	}
	else if(x<y)
	{
		printf("%d is highest",y);
	}
	else if(x==y)
	{
		printf("%d and %d are equal",x,y);
	}
}
