/*1.	Write a function which performs increment operation. */

#include<stdio.h>
int num(int *);
 int main()
{
	int n,res;
	scanf("%d",&n);
	res=num(&n);
	printf("the increment is %d",res);
	
}
int num(int *num)
{
	int res;
	res = *num + 1;
	return res;
}
