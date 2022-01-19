/*7. Find product of two numbers using recursion*/

#include<stdio.h>
int product(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The product of two numbers:%d",product(a,b));
	
}
int product(int x,int y)
{
	int prod;
	prod=x*y;
	return prod;
}
