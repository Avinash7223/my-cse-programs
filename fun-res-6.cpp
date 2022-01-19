/*6. Find power of any number using recursion*/

#include<stdio.h>
#include<math.h>
int po(int,int);
int main()
{
	int a,b;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter thr power:");
	scanf("%d",&b);
	printf("It is power:%d",po(a,b));	
}
int po(int x,int y)
{
	int p;
	p=pow(x,y);
	return p;
}

