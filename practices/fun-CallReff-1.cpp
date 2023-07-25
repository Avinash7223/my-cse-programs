/*1. Write a function to swap two numbers using the concept of call by
reference.*/

#include<stdio.h>
int swap(int*,int*);
int main()
{
	int a,b,*c,*d;
	scanf("%d%d",&a,&b);
	c=&a;
	d=&b;
	swap(c,d);
	
}
int swap(int *x,int *y)
{
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	printf("%d and %d",*x,*y);
	
}
