//Return maximum of given two numbers//
#include<stdio.h>
void max(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	max(a,b);
}
void max(int x,int y)
{
	
	if(x>y)
	{
		printf("great %d",x);
	}
	else if(y>x)
	{
		printf("greatest %d",y);
	}
}

