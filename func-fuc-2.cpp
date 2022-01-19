/*2. Find power of a number*/

#include<stdio.h>
#include<math.h>

int powr(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	powr(n);
}
int powr(int n)
{
	int a,result;
	printf("Enter the power");
	scanf("%d",&a);
	result=pow(n,a);
	printf("the result is:%d",result);
}

