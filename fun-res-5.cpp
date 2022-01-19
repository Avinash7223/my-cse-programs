/*5. Find LCM of two numbers using recursion.*/

#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",lcm(a,b));
}
int lcm(int a, int b)
{
	int l;
	if (a>b)
	{
		l=a;
	}
	else
	{
		l=b;
	}
	while(l<=(a*b))
	{
		if(l%a==0 && l%b==0)
		{
			return l;
		}
		else
		{
			l++;
		}
	}
	
}
