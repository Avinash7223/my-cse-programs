/*1. Write a program to find minimum of n elements in an array.*/
#include<stdio.h>
int main()
{
	int element[100],num,i,min;
	printf("enter the number of elements:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",& element[i]);
	}
	min=element[0];
	for(i=1;i<num;i++)
	{
		if(min>element[i])
		{
			min=element[i];
		}
	}
	printf("the minimum number is %d",min);
	
}
